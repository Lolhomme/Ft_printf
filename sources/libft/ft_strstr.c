/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:15:44 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/12 13:41:56 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		scan(char *str, const char *to_find)
{
	int			i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strstr(const char *str, const char *to_find)
{
	int			i;
	char		*ptrstr;

	ptrstr = (char *)str;
	if (!*to_find)
		return (ptrstr);
	i = 0;
	while (ptrstr[i])
	{
		if (ptrstr[i] == to_find[0])
			if (scan(&ptrstr[i], to_find))
				return (&ptrstr[i]);
		i++;
	}
	return (NULL);
}
