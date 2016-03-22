/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:27:37 by agauci-d          #+#    #+#             */
/*   Updated: 2014/12/30 15:30:38 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** The memchr() function locates the first occurrence of c (converted
** to an unsigned char) in string s.
** RETURN VALUES
** The memchr() function returns a pointer to the byte located, or NULL
** if no such byte exists within n bytes.
*/

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	b;

	a = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (a[i] == b)
			return ((void *)&a[i]);
		i++;
	}
	return (NULL);
}
