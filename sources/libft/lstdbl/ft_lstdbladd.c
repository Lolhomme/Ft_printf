/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdbladd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 12:45:09 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:10:19 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
** Pour une liste doublement chainee.
** Ajoute l'element new en tete de la liste.
** Param. #1
** L'adresse d'un pointeur sur le premier maillon d'une liste.
** Param. #2
** Le maillon a ajouter en tete de cette liste.
*/

void		ft_lstdbladd(t_listdbl **alist, t_listdbl **zlist, t_listdbl *new)
{
	if (alist && !*alist && zlist && !*zlist)
	{
		*alist = new;
		*zlist = new;
	}
	else if (alist && *alist && new)
	{
		new->next = *alist;
		new->prev = NULL;
		(*alist)->prev = new;
		*alist = new;
	}
}
