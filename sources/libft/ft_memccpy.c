/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:43:27 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 12:57:34 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** The memccpy() function copies bytes from string src to string dst.
** If the character c (as converted to an unsigned char) occurs in the
** string src, the copy stops and a pointer to the byte after the copy of
** c in the string dst is returned. Otherwise, n bytes are copied, and
** a NULL pointer is returned. The source and destination strings should
** not overlap, as the behavior is undefined.)
*/

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			b[i] = a[i];
			return ((void *)&b[i + 1]);
		}
		b[i] = a[i];
		i++;
	}
	return (NULL);
}
