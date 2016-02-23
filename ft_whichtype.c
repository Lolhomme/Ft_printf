/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichtype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 17:46:53 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/23 18:37:20 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			ft_whichtype(va_list ap, char c)
{
	if (c == 'c')
		return (istype_c(ap));
	if (c == 's')
		return (istype_s(ap));
	if (c == 'd')
		return (istype_d(ap));
	if (c == '%')
	{
		ft_putchar('%');
		return (1);
	}
	return (0);
}
