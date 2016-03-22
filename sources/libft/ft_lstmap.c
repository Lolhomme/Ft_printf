/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 17:46:13 by agauci-d          #+#    #+#             */
/*   Updated: 2015/01/14 13:34:11 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description
** Parcourt la liste lst en appliquant a chaque maillon la fonction f
** et cree une nouvelle liste fraiche avec malloc(3) resultant des
** applications successives. Si une allocation echoue, la fonction
** renvoie NULL.
** Param.
** #1 Pointeur sur le premier maillon d'une liste.
** #2 L'adresse d'une fonction a appliquer a chaque maillon de la
** liste pour creer une nouvelle liste.
** Retour
** La nouvelle liste.
** Fonctions libc
** malloc(3)
*/

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*tmp;

	result = NULL;
	if (lst)
	{
		if ((result = (t_list *)malloc(sizeof(t_list *))))
		{
			result = f(lst);
			lst = lst->next;
			while (lst != NULL)
			{
				if ((tmp = (t_list*)malloc(sizeof(t_list*))))
				{
					ft_lstaddend(&result, (tmp = f(lst)));
					lst = lst->next;
				}
				else
					return ((result = NULL));
			}
		}
	}
	return (result);
}
