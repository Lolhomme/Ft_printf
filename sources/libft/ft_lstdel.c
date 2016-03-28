/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 17:38:13 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 12:56:02 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description
** Prend en parametre l'adresse d'un pointeur sur un maillon et libere
** la memoire de ce maillon et celle de tous ses successeurs l'un
** apres l'autre avec del et free(3). Pour terminer, le pointeur sur
** le premier maillon maintenant libere doit etre mis a NULL (de
** maniere similaire a la fonction ft_memdel de la partie obligatoire).
** Param. #1
** L'adresse d'un pointeur sur le premier maillon d'une liste a liberer.
** Fonctions libc
** free(3)
*/

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;

	if (alst && *alst && del)
	{
		ptr = *alst;
		while (ptr->next != NULL)
		{
			if (ptr->content != NULL)
				del(ptr->content, ptr->content_size);
			ptr = ptr->next;
		}
		if (ptr->content != NULL)
			del(ptr->content, ptr->content_size);
		ptr = *alst;
		while (ptr->next != NULL)
		{
			free(ptr);
			ptr = ptr->next;
		}
		free(ptr);
		*alst = NULL;
	}
}
