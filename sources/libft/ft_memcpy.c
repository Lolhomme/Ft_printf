/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:54:05 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 12:58:23 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memcpy() function copies n bytes from memory area src to memory
** area dst. If dst and src overlap, behavior is undefined.
** Applications in which dst and src might overlap should use
** memmove(3) instead.
** RETURN VALUES
** The memcpy() function returns the original value of dst.
*/

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return ((void *)&b[0]);
}
