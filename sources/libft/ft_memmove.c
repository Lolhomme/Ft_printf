/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:27:42 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 12:58:50 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	*c;

	a = (unsigned char *)src;
	c = (unsigned char *)dst;
	b = (unsigned char *)malloc(sizeof(unsigned char) * len);
	i = 0;
	while (i < len)
	{
		b[i] = a[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		c[i] = b[i];
		i++;
	}
	free(b);
	return (dst);
}
