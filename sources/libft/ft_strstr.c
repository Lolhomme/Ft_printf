/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:53:19 by agauci-d          #+#    #+#             */
/*   Updated: 2014/11/11 19:20:15 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strstr() function locates the first occurrence of the null-terminated
** string s2 in the null-terminated string s1.
** If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1, NULL is
** returned; otherwise a pointer to the first character of the first occurrence
** of s2 is returned.
*/

char *ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		h;
	char	*a;

	i = 0;
	h = 0;
	a = (char *)s1;
	if (!s1)
		return (NULL);
	if (*s2 == '\0')
		return (a);
	while (s1[i] != '\0')
	{
		if (s1[i] == *s2)
		{
			h = ft_strncmp(&s1[i], s2, ft_strlen(s2));
			if (h == 0)
				return (&a[i]);
		}
		i++;
	}
	return (NULL);
}
