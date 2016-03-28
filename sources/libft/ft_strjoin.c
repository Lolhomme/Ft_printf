/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:56:05 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:03:06 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

/*
** Alloue (avec malloc(3)) et retourne une chaine de caracteres fraiche
** terminee par un '\0' resultant de la concatenation de s1 et s2. Si
** l'allocation echoue, la fonction renvoie NULL.
*/

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
