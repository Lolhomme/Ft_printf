/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 13:15:30 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/26 14:34:29 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			ft_whichflags(char *format)
{
	int		i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '#' || format[i] == '-' || format[i] == '+' ||
			   	format[i] == ' ')
			i += ft_options(format[i]);
		else if (ft_isdigit(format[i]) && format[i - 1] != '.')
			i += ft_width(&format[i]);
		else if (format[i] == '.')
			i += ft_precision(&format[i]);
		else if (format[i] == 'h' || format[i] == 'l' || format[i] == 'j'
				|| format[i] == 'z')
			i += ft_size_options(&format[i]);
		i++;
	}
	return (i);
}
