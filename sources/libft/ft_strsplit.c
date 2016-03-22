/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:59:33 by agauci-d          #+#    #+#             */
/*   Updated: 2015/02/13 12:32:06 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
** Alloue (avec malloc(3)) et retourne un tableau de chaines de caracteres
** fraiches (toutes terminees par un '\0', le tableau egalement donc)
** resultant de la decoupe de s selon le caractere c.
** Si l'allocation echoue, la fonction retourne NULL.
** Exemple : ft_strsplit("*salut*les***etudiants*", '*')
** renvoie le tableau ["salut", "les", "etudiants"].
** Param.
** #1 La chaine de caracteres a decouper.
** #2 Le caractere selon lequel decouper la chaine.
** Retour
** Le tableau de chaines de caracteres fraiches resultant de la decoupe.
** Fonctions libc: malloc(3)
*/

static size_t	ft_split_tab_nbr(const char *s, char c)
{
	size_t	counter;
	size_t	i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

static size_t	ft_sltoc(const char *src, char c)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(src);
	while (src[i] != c && i < len)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**dst;

	i = 0;
	k = -1;
	if (!s)
		return (NULL);
	dst = (char **)ft_memalloc((sizeof(char *) * (ft_split_tab_nbr(s, c) + 1)));
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			dst[++k] = (char *)ft_memalloc(ft_sltoc(&s[i], c) + 1);
			j = 0;
			while (s[i] != c && s[i] != '\0')
				dst[k][j++] = s[i++];
			dst[k][j] = '\0';
		}
	}
	dst[k + 1] = NULL;
	return (dst);
}
