/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:48:16 by agauci-d          #+#    #+#             */
/*   Updated: 2014/11/11 19:47:37 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** The strnstr() function locates the first occurrence of the
** null-terminated string s2 in the string s1, where not more
** than n characters are searched. Characters that appear after
** a `\0' character are not searched. Since the strnstr() function
** is a FreeBSD specific API, it should only be used when portability
** is not a concern.
** RETURN VALUES
** If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
** NULL is returned; otherwise a pointer to the first character of the
** first occurrence of s2 is returned.
*/

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		h;
	char	*a;

	i = -1;
	h = 0;
	a = (char *)s1;
	if (!s1 || ft_strlen(s2) > n)
		return (NULL);
	if (*s2 == '\0')
		return (a);
	while (s1[++i] != '\0' && i < n)
	{
		if (s1[i] == *s2)
		{
			if (n - i >= ft_strlen(s2))
			{
				h = ft_strncmp(&s1[i], s2, ft_strlen(s2));
				if (h == 0)
					return (&a[i]);
			}
		}
	}
	return (NULL);
}
