/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istype_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:18:23 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 15:51:12 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long int	ft_ll_signed(va_list ap)
{
	unsigned long long int	arg;

	arg = va_arg(ap, unsigned long long int);
	return (arg);
}

static unsigned long int		ft_l_signed(va_list ap, t_env *env)
{
	unsigned long int	arg;
	void				*parg;

	if (env->params == 'p')
	{
		parg = va_arg(ap, void *);
		arg = (unsigned long int)parg;
	}
	else
		arg = va_arg(ap, unsigned long int);
	return (arg);
}

static unsigned char			ft_hh_signed(va_list ap)
{
	unsigned char			arg;

	arg = va_arg(ap, unsigned int);
	return (arg);
}

static unsigned short int		ft_h_signed(va_list ap)
{
	unsigned short arg;

	arg = va_arg(ap, unsigned int);
	return (arg);
}

int								istype_x(va_list ap, t_env *env)
{
	unsigned long long int	arg;
	char					*dst;
	int						i;

	i = 0;
	if (env->ll && env->params != 'p')
		arg = ft_ll_signed(ap);
	else if (env->l || env->params == 'p')
		arg = (unsigned long long int)ft_l_signed(ap, env);
	else if (env->hh)
		arg = (unsigned long long int)ft_hh_signed(ap);
	else if (env->h)
		arg = (unsigned long long int)ft_h_signed(ap);
	else if (env->j || env->z)
		arg = istype_o_jz(ap, env);
	else
	{
		arg = va_arg(ap, unsigned int);
		arg = (unsigned long long int)arg;
	}
	dst = ft_conv_hexa(arg, env);
	i = ft_print_unsigned_number(dst, env);
	return (i);
}
