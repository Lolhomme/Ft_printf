/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:16:00 by agauci-d          #+#    #+#             */
/*   Updated: 2014/11/11 14:56:09 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION:
** The strlcat() function copies and concatenates strings. It's designed
** to be safer, more consistent, and less error prone replacements
** for strncpy(3) and strncat(3). Unlike those functions, strlcat()
** takes the full size of the buffer (not just the length) and guarantee
** to NUL-terminate the result (as long as there is at least one byte
** free in dst). Note that a byte for the NUL should be included in size.
** Also note that strlcat() only operates on true ``C'' strings.
** This means that for strlcat() both src and dst must be NUL-terminated.
** The strlcat() function appends the NUL-terminated string src to the end
** of dst. It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result.
** The source and destination strings should not overlap, as the behavior
** is undefined.
** RETURN VALUES
** The strlcat() function returns the total length of the string they tried
** to create. For strlcat() that means the initial length of dst plus the
** length of src. While this may seem somewhat confusing, it was done to
** make truncation detection simple.
**  Note however, that if strlcat() traverses size characters without
** finding a NUL, the length of the string is considered to be size and the
** destination string will not be NUL-terminated (since there was no space
** for the NUL). This keeps strlcat() from running off the end of a string.
** In practice this should not happen (as it means that either size is
** incorrect or that dst is not a proper ``C'' string). The check exists to
** prevent potential security problems in incorrect code.
*/

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t lendst;
	size_t lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size < lendst)
		return (lensrc + size);
	while (lendst + i + 1 < size && src[i])
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
