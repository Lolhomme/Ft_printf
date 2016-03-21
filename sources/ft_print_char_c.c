/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:57:17 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 16:10:41 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_minus(int size, char c)
{
	int i;

	i = 0;
	ft_putchar(c);
	while (i < (size - 1))
	{
		ft_putchar(' ');
		i++;
	}
	return (i + 1);
}

static int	ft_zero(int size, char c)
{
	int i;

	i = 0;
	while (i < (size - 1))
	{
		ft_putchar('0');
		i++;
	}
	ft_putchar(c);
	return (i + 1);
}

static int	ft_space(int size, char c)
{
	int i;

	i = 0;
	while (i < (size - 1))
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar(c);
	return (i + 1);
}

int			ft_print_char_c(char arg, t_env *env)
{
	int		i;

	i = 0;
	if (env->size && !env->zero && !env->minus)
		i = ft_space(env->size, arg);
	else if (env->size && env->zero && !env->minus)
		i = ft_zero(env->size, arg);
	else if (env->size && env->minus)
		i = ft_minus(env->size, arg);
	else
	{
		i = 1;
		ft_putchar(arg);
	}
	(void)env;
	return (i);
}
