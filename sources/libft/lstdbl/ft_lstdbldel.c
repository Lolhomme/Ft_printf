/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdbldel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 15:13:05 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:11:36 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description
** Pour une liste doublement chainee.
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

void	ft_lstdbldel(t_listdbl **alst, void (*del)(void *, size_t))
{
	t_listdbl	*ptr;

	if (alst && *alst)
	{
		ptr = *alst;
		ft_lstdbldelone(alst, del);
		if (ptr->next != NULL)
		{
			ft_lstdbldel(&ptr->prev, del);
			ft_lstdbldel(&ptr->next, del);
		}
	}
}
