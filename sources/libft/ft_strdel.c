/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:05:53 by agauci-d          #+#    #+#             */
/*   Updated: 2015/01/14 13:23:55 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Prend en parametre l'adresse d'une chaine de caracteres qui doit
** etre liberee avec free(3) et son pointeur mis a NULL.
*/

void ft_strdel(char **as)
{
	if (!as)
		return ;
	free(*as);
	*as = NULL;
}
