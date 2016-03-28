/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdbladdend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 12:48:33 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:12:22 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Pour une liste doubement chainee.
** Ajoute l element new_elem en fin de liste.
*/

void	ft_lstdbladdend(t_listdbl **alist, t_listdbl **zlist,
		t_listdbl *new_elem)
{
	t_listdbl	*cpy;

	if (!alist && !*alist)
	{
		ft_putstr("error ft_lstdbladdend() ");
		return ;
	}
	if (alist && *alist && new_elem)
	{
		cpy = *alist;
		while (cpy->next != NULL)
			cpy = cpy->next;
		new_elem->prev = cpy;
		cpy->next = new_elem;
		*zlist = new_elem;
	}
}
