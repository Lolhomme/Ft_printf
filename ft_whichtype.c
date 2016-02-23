/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichtype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 17:46:53 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/23 11:17:06 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_whichtype( va_list ap, char c)
{
	if (c == 'c')
		return (istype_c(ap));
	if (c == 's')
		return (istype_s(ap));
	if (c == '%')
	{
		ft_putchar('%');
		return (1);
	}
}
