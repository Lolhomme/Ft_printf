/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 18:26:22 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/26 14:34:42 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			ret;
	int			i;

	va_start(ap, format);
	ret = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i++]);
			ret++;
		}
		else if (format[i] == '%')
		{
			ret += ft_whichflags((char*)(format[i + 1]));
			ret += ft_whichtype((char*)(format[i + 1]));
		}
		i++;
	}
	va_end(ap);
	return (ret);
}
