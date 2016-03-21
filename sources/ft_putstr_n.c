/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 16:44:47 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 16:34:09 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr_n(char *s, int start, int len)
{
	int j;

	j = 0;
	if (!s)
		return ;
	while (s[start] && j < len)
	{
		ft_putchar(s[start]);
		start++;
		j++;
	}
}
