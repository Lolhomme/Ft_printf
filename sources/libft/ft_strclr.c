/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:49:53 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:01:12 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Assigne la valeur '\0' a tous les caracteres de la chaine passee
** en parametre.
*/

void		ft_strclr(char *s)
{
	size_t i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
