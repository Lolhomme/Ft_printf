/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istype_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 11:52:35 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 15:49:33 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long long int	ft_ll_signed(va_list ap)
{
	long long int arg;

	arg = va_arg(ap, long long int);
	if (arg < LLONG_MIN || arg > LLONG_MAX)
		arg = arg < 0 ? LLONG_MIN : LLONG_MAX;
	return (arg);
}

static long int			ft_l_signed(va_list ap)
{
	long int arg;

	arg = va_arg(ap, long int);
	if (arg < LONG_MIN || arg > LONG_MAX)
		arg = arg < 0 ? LONG_MIN : LONG_MAX;
	return (arg);
}

static signed char		ft_hh_signed(va_list ap)
{
	int			arg;

	arg = (int)va_arg(ap, int);
	arg = (char)arg;
	if (arg < SCHAR_MIN || arg > SCHAR_MAX)
		arg = arg < 0 ? SCHAR_MIN : SCHAR_MAX;
	return (arg);
}

static short int		ft_h_signed(va_list ap)
{
	short	arg;
	int		arg2;

	arg2 = va_arg(ap, int);
	if (arg2 < SHRT_MIN || arg2 > SHRT_MAX)
		arg2 = arg2 < 0 ? SHRT_MIN : SHRT_MAX;
	arg = (short)arg2;
	return (arg);
}

int						istype_d(va_list ap, t_env *env)
{
	long long int	arg;
	int				i;

	i = 0;
	if (env->ll && env->params != 'D')
		arg = ft_ll_signed(ap);
	else if (env->l || env->params == 'D')
		arg = (long long int)ft_l_signed(ap);
	else if (env->hh)
		arg = (long long int)ft_hh_signed(ap);
	else if (env->h)
		arg = (long long int)ft_h_signed(ap);
	else if (env->j || env->z)
		arg = istype_d_jz(ap, env);
	else
	{
		arg = va_arg(ap, int);
		arg = (long long int)arg;
	}
	i = ft_print_signed_number(arg, env);
	return (i);
}
