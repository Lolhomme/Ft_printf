/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdbldelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 11:10:55 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:11:48 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Descripition
** Pour une liste doublement chainee.
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

void	ft_lstdbldelone(t_listdbl **alst, void (*del)(void *, size_t))
{
	t_listdbl		*delone;

	if (alst && *alst)
	{
		delone = *alst;
		delone->content = NULL;
		delone->content_size = 0;
		del(delone->content, delone->content_size);
		ft_memdel((void **)alst);
	}
}
