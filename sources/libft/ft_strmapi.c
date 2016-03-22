/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 11:26:34 by agauci-d          #+#    #+#             */
/*   Updated: 2015/01/14 13:22:35 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre en precisant son index pour creer une nouvelle
** chaine fraiche (avec malloc(3)) resultant des applications
** successives de f.
*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	unsigned int	index;
	size_t			len;
	char			*dst;

	i = 0;
	index = 0;
	len = ft_strlen(s);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !f)
		return (NULL);
	while (i < len)
	{
		dst[i] = f(index, s[i]);
		i++;
		index++;
	}
	dst[i] = '\0';
	return (dst);
}
