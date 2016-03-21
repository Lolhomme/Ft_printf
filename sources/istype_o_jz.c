/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istype_o_jz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 16:06:22 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 15:50:32 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long long int istype_o_jz(va_list ap, t_env *env)
{
	unsigned long long int	arg;

	arg = 0;
	if (env->j)
	{
		arg = (unsigned long long int)va_arg(ap, uintmax_t);
	}
	else if (env->z)
	{
		arg = va_arg(ap, size_t);
		arg = (unsigned long long int)arg;
	}
	return (arg);
}
