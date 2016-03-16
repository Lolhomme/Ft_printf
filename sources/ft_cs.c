/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 15:13:10 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/16 15:14:10 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

char	*ft_cs(wchar_t arg)
{
	char *s;

	s = ft_strnew(5);
	if (arg < 0x80)
		s[0] = ((arg >> 0) & 0x7F) | 0x00;
	else if (arg < 0x0800)
	{
		s[0] = ((arg >> 6) & 0x1F) | 0xC0;
		s[1] = ((arg >> 0) & 0x3F) | 0x80;
	}
	else if (arg < 0x010000)
	{
		s[0] = ((arg >> 12) & 0x0F) | 0xE0;
		s[1] = ((arg >> 6) & 0x3F) | 0x80;
		s[2] = ((arg >> 0) & 0x3F) | 0x80;
	}
	else if (arg < 0x110000)
	{
		s[0] = ((arg >> 18) & 0x07) | 0xF0;
		s[1] = ((arg >> 12) & 0x3F) | 0x80;
		s[2] = ((arg >> 6) & 0x3F) | 0x80;
		s[3] = ((arg >> 0) & 0x3F) | 0x80;
	}
	return (s);
}