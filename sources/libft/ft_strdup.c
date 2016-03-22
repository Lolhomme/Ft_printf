/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:36:21 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/22 17:24:23 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = ft_strlen(s1);
	if (s1 != '\0')
	{
		s2 = (char *)malloc(sizeof(char) * (i + 1));
		if (s2)
		{
			i = 0;
			while (s1[i] != '\0')
			{
				s2[i] = s1[i];
				i++;
			}
			s2[i] = '\0';
		}
		return (s2);
	}
	return (NULL);
}
