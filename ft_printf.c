/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 18:26:22 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/22 18:35:41 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char* format, ...)
{
	va_list	ap;
	int		i;
	int		cmp;
	char*	str;

	i = 0;
	cmp = 0;
	va_start(ap, format);
	str = (char*)malloc(sizeof(char) * (ft_strlen(format) + 1));
	str = ft_strcpy(format);
	while (!*str)
	{
		if (*str != '%')
		{
			ft_putchar(str[i++]);
			cmp++;
		}
		else if (*str == '%')
			cmp += ft_whichtype(str, i++, ap);
		i++;
	}
	va_end(va_list ap);
	return (cmp);
}
