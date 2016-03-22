/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:46:02 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/22 17:25:49 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

/*
 ** Alloue (avec malloc(3)) et retourne la copie fraiche d'un troncon
 ** de la chaine de caracteres passee en parametre. Le troncon commence
 ** a l'index start et a pour longueur len. Si start et len ne designent
 ** pas un troncon de chaine valide, le comportement est indetermine. Si
 ** l'allocation echoue, la fonction renvoie NULL.
 */

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (dst);
	while (s[start + i] && i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
