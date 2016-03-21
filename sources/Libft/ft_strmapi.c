/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 10:57:24 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/12 11:34:06 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	size_t			l;

	if (s && f)
	{
		l = ft_strlen(s);
		str = (char *)malloc(sizeof(char) * (l + 1));
		if (!str)
			return (NULL);
		i = 0;
		while (i < l)
		{
			str[i] = (*f)(i, *s++);
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (NULL);
}
