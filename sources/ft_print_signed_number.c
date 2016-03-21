/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 12:51:14 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 16:17:27 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cortex(long long int arg, t_env *env, int excep)
{
	int		i;

	i = 0;
	if (env->plus && arg >= 0)
		ft_putchar('+');
	else if (env->space && arg >= 0)
		ft_putchar(' ');
	if (!excep)
		ft_putnbr_ll(arg);
	i += excep ? 0 : intlen(arg);
	return (i + 1);
}

static int	ft_precision(long long int arg, t_env *env, int excep)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (env->plus || env->space || arg < 0)
		j = 1;
	if (env->plus && arg >= 0)
		ft_putchar('+');
	else if (env->space && arg >= 0)
		ft_putchar(' ');
	if (arg < 0)
	{
		ft_putchar('-');
		arg = -arg;
	}
	i = excep && arg == 0 ? 0 : intlen(arg);
	while (i < env->precision && !excep)
	{
		ft_putchar('0');
		i++;
	}
	if (!excep || (intlen(arg) > env->precision && excep && arg != 0))
		ft_putnbr_ll(arg);
	return (i + j);
}

static void	ft_minus_two(long long int arg, t_env *env)
{
	int j;

	j = env->precision;
	while (j > intlen(arg))
	{
		ft_putchar('0');
		j--;
	}
}

static int	ft_minus(long long int arg, t_env *env, int excep)
{
	int		i;

	i = 0;
	if (env->plus || env->space || arg < 0)
		i++;
	if (env->plus && arg >= 0)
		ft_putchar('+');
	else if (env->space && arg >= 0)
		ft_putchar(' ');
	ft_minus_two(arg, env);
	if (!excep)
		ft_putnbr_ll(arg);
	i += env->precision > intlen(arg) ? env->precision : intlen(arg);
	if (env->size)
	{
		while (i < env->size)
		{
			ft_putchar(' ');
			i++;
		}
	}
	i -= excep ? intlen(arg) : 0;
	return (i);
}

int			ft_print_signed_number(long long int arg, t_env *env)
{
	int		i;
	int		excep;

	i = 0;
	excep = (env->isprecision && env->precision == 0) ? 1 : 0;
	if (env->minus && ((env->precision < env->size && env->isprecision)
		|| !env->precision))
		i += ft_minus(arg, env, excep);
	else if (env->isprecision && env->precision >= env->size)
		i += ft_precision(arg, env, excep);
	else if (env->size)
		i += ft_size_sn(arg, env, excep);
	else if (env->plus || env->space)
		i += ft_cortex(arg, env, excep);
	else
	{
		if (!excep)
			ft_putnbr_ll(arg);
		i = excep ? 0 : intlen(arg);
		i += (arg < 0 ? 1 : 0);
		i += (arg == LLONG_MIN ? 18 : 0);
	}
	return (i);
}
