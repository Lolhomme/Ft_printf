/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:42:32 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 16:42:26 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ulltoa(unsigned long long int arg)
{
	char						*dst;
	int							i;
	unsigned long long int		value;

	if (arg == 0)
		return ("0");
	i = uintlen(arg) + 1;
	dst = (char *)malloc(sizeof(char) * (i));
	if (!dst)
		return (NULL);
	dst[i - 1] = '\0';
	i = i - 2;
	while (arg > 9)
	{
		value = arg % 10;
		dst[i] = value + '0';
		arg = (arg / 10);
		i--;
	}
	if (arg <= 9)
		dst[i] = arg + '0';
	return (dst);
}
