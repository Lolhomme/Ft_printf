/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:52:20 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/16 14:52:45 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	ft_precision_null(char *arg, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		ft_putchar(arg[i]);
		i++;
	}
	return (i);
}

static int	ft_no_minus(t_env *env, char *arg, char c, int j)
{
	int i;

	i = 0;
	if (env->size)
		j = env->isprecision ? (env->size - env->precision) : (env->size - j);
	if (env->size)
		i += ft_size_arg_null_s(i, c, j);
	if (env->isprecision)
		i += ft_precision_null(arg, env->precision);
	if (!env->isprecision)
	{
		ft_putstr(arg);
		i += ft_strlen(arg);
	}
	return (i);
}

static int	ft_arg_null(char *arg, t_env *env, int i)
{
	char	c;
	int		j;

	c = env->zero ? '0' : ' ';
	j = 6;
	if (env->isprecision)
		env->isprecision = env->precision < 6 ? 1 : 0;
	if (!arg)
		arg = ft_strdup("(null)");
	if (env->minus)
	{
		c = ' ';
		if (env->isprecision)
			i += ft_precision_null(arg, env->precision);
		else
		{
			ft_putstr(arg);
			i = 6;
		}
		if (env->size)
			i = ft_size_arg_null_s(i, c, env->size);
	}
	else
		i += ft_no_minus(env, arg, c, j);
	return (i);
}

static int	ft_arg(char *arg, t_env *env, int i)
{
	char	c;

	c = env->zero ? '0' : ' ';
	if (env->isprecision)
		env->isprecision = (env->precision < ((int)ft_strlen(arg))) ? 1 : 0;
	if (env->minus)
	{
		c = ' ';
		if (env->isprecision)
			i += ft_precision_null(arg, env->precision);
		else
		{
			ft_putstr(arg);
			i = ft_strlen(arg);
		}
		if (env->size)
			i = ft_size_arg_null_s(i, c, env->size);
	}
	else
		i += ft_no_minus(env, arg, c, (int)ft_strlen(arg));
	return (i);
}

int			ft_print_char_s(char *arg, t_env *env)
{
	int i;

	i = 0;
	if (!arg)
		i += ft_arg_null(arg, env, i);
	else if (env->size || env->isprecision)
		i += ft_arg(arg, env, i);
	else
	{
		i = ft_strlen(arg);
		ft_putstr(arg);
	}
	return (i);
}
