/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istype_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 11:29:05 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/23 11:34:36 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			istype_s(va_list ap)
{
	char*	str;

	str = va_arg(ap, char*);
	if (str == NULL)
	{
		ft_putstr("null");
		return (4);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}
