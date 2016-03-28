/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:26:53 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:04:18 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre pour creer une nouvelle chaine fraiche
** (avec malloc(3)) resultant des applications successives de f.
*/

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*dst;

	i = 0;
	len = ft_strlen(s);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !f)
		return (NULL);
	while (i < len)
	{
		dst[i] = f(s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
