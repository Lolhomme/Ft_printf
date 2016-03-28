/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 17:44:15 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 12:56:27 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
** Parcourt la liste lst en appliquant a chaque maillon la fonction f.
** Param. #1
** Pointeur sur le premier maillon d'une liste.
** Param. #2
** L'adresse d'une fonction a laquelle appliquer chaque maillon de la liste.
*/

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst)
	{
		f(lst);
		ft_lstiter(lst->next, f);
	}
}
