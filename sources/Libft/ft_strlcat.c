/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:04:42 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/23 15:05:00 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	buff;
	size_t	len2;
	size_t	n_ori;

	i = 0;
	n_ori = n;
	len2 = ft_strlen(src);
	buff = ft_strlen(dst) + len2;
	while (*dst && n)
	{
		n--;
		dst++;
	}
	if (n == 0)
		return (n_ori + len2);
	while (src[i] && n-- > 1)
		*dst++ = src[i++];
	*dst = 0;
	return (buff);
}
