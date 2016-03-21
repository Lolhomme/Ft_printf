/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:41:44 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/14 16:55:42 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*ptrs;

	ptrs = (const unsigned char *)s;
	while (n--)
	{
		if (*ptrs == (unsigned char)c)
			return ((void *)ptrs);
		ptrs++;
	}
	return (NULL);
}
