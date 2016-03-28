/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 17:25:31 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 12:56:14 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Descripition
** Prend en parametre l'adresse d'un pointeur sur un maillon et libere
** la memoire du contenu de ce maillon avec la fonction del passee en
** parametre puis libere la memoire du maillon en lui meme avec free(3).
** La memoire du champ next ne doit en aucun cas etre liberee.
** Pour terminer, le pointeur sur le maillon maintenant libere doit etre
** mis a NULL (de maniere similaire a la fonction ft_memdel de la partie
** obligatoire).
** Param. #1
** L'adresse d'un pointeur sur le maillon a liberer.
** Fonctions libc
** free(3)
*/

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp;

	if (alst && *alst && del)
	{
		tmp = *alst;
		if (tmp->content != NULL)
			del(tmp->content, tmp->content_size);
		if (tmp != NULL)
			free(tmp);
		*alst = NULL;
	}
}
