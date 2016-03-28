/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlengh.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:44:58 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 12:53:53 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calcul la longueur d'un int. Et retourne cette valeur.
*/

int		ft_intlength(int n)
{
	int i;

	i = 1;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (i > 11)
		return (0);
	return (i);
}
