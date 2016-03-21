/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 15:27:19 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 16:42:50 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(char *s, wchar_t arg)
{
	int i;

	i = 0;
	if (arg < 0x010000)
	{
		s[0] = ((arg >> 12) & 0x0F) | 0xE0;
		s[1] = ((arg >> 6) & 0x3F) | 0x80;
		s[2] = ((arg >> 0) & 0x3F) | 0x80;
		i = 3;
	}
	else if (arg < 0x110000)
	{
		s[0] = ((arg >> 18) & 0x07) | 0xF0;
		s[1] = ((arg >> 12) & 0x3F) | 0x80;
		s[2] = ((arg >> 6) & 0x3F) | 0x80;
		s[3] = ((arg >> 0) & 0x3F) | 0x80;
		i = 4;
	}
	return (i);
}

int			ft_wchar_len(wchar_t arg)
{
	char	*s;
	int		i;

	s = ft_strnew(5);
	i = 0;
	if (arg < 0x80)
	{
		s[0] = ((arg >> 0) & 0x7F) | 0x00;
		i = 1;
	}
	else if (arg < 0x0800)
	{
		s[0] = ((arg >> 6) & 0x1F) | 0xC0;
		s[1] = ((arg >> 0) & 0x3F) | 0x80;
		i = 2;
	}
	else
		ft_len(s, arg);
	return (i);
}
