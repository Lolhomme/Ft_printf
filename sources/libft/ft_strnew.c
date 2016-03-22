/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:01:52 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/22 17:25:31 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

/*
** Alloue (avec malloc(3)) et retourne une chaine de caractere fraiche
** terminee par un '\0'. Chaque caractere de la chaine est initialise a
** '\0'. Si l'allocation echoue, la fonction renvoie NULL.
*/

char *ft_strnew(size_t size)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *)malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);
	while (i < size + 1)
	{
		a[i] = '\0';
		i++;
	}
	return (a);
}
