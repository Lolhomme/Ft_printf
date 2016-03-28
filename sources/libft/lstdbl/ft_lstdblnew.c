/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 16:06:24 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:11:59 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** DESCRIPTION
** Pour une liste doublement chainee.
** Alloue (avec malloc(3)) et retourne un maillon frais. Les champs
** content et content_size du nouveau maillon sont initialises par copie
** des parametres de la fonction. Si le parametre content est nul, le
** champs content est initialise a NULL et le champs content_size est
** initialise a 0 quelque soit la valeur du parametre content_size.
** Le champ next est initialise a NULL. Si l'allocation echoue, la
** fonction renvoie NULL.
** PARAM. #1 Le contenu a ajouter au nouveau maillon.
**        #2 La taille du contenu a ajouter au nouveau maillon.
** RETOUR
** Le nouveau maillon.
** Fonctions libc
** malloc(3)
*/

t_listdbl		*ft_lstdblnew(void const *content, size_t content_size)
{
	t_listdbl	*elem;

	elem = (t_listdbl *)malloc(sizeof(t_list));
	if (content_size >= SIZE_MAX || !elem)
		return (NULL);
	if (elem)
	{
		if (content == 0)
		{
			elem->content = NULL;
			elem->content_size = 0;
		}
		else
		{
			elem->content = ft_strnew(content_size);
			elem->content = ft_memcpy(elem->content, content, content_size);
			elem->content_size = content_size;
		}
		elem->next = NULL;
		elem->prev = NULL;
	}
	return (elem);
}
