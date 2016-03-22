/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:12:57 by agauci-d          #+#    #+#             */
/*   Updated: 2015/01/14 13:02:36 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre en precisant son index en premier argument. Chaque
** caractere est passe par adresse a la fonction f afin de pouvoir etre
** modifie si necessaire.
*/

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL || f == NULL)
		return ;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
