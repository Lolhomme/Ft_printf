/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 18:42:35 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:07:02 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Alloue (avec malloc(3)) et retourne une copie de la chaine passee en
** parametre sans les espaces blancs au debut et a la fin de cette chaine.
** On considere comme espaces blancs les caracteres ' ', '\n' et '\t'. Si s
** ne contient pas d'espaces blancs au debut ou a la fin, la fonction renvoie
** une copie de s. Si l'allocation echoue, la fonction renvoie NULL.
*/

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			j;
	int				k;
	char			*dst;

	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return ("");
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	dst = (char *)malloc(sizeof(char) * (i + (j - i) + 1));
	while (i <= j)
	{
		dst[k] = s[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	return (dst);
}
