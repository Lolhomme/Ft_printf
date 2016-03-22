/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 11:47:36 by agauci-d          #+#    #+#             */
/*   Updated: 2015/01/14 13:31:30 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description :
** Alloue (avec malloc(3)) et retourne une chaine de caracteres fraiche
** terminee par un '\0' representant l'entier n passe en parametre.
** Les nombres negatifs doivent etre geres. Si l'allocation echoue,
** la fonction renvoie NULL.
** Param. #1 L'entier a convertir en une chaine de caracteres.
** Retour : La chaine de caracteres representant l'entier passe en
** parametre.
** Fonctions libc : malloc(3)
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
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		i;
	int		value;

	if (n == 0)
		return ("0");
	i = ft_intlength(n) + 1 + (n < 0 ? 1 : 0);
	dst = (char *)malloc(sizeof(char) * (i));
	if (n == -2147483648)
		return ((dst = ft_strcpy(dst, "-2147483648")));
	dst[0] = n < 0 ? '-' : '+';
	n = (n < 0 ? -n : n);
	dst[i - 1] = '\0';
	i = i - 2;
	while (n > 9)
	{
		value = n % 10;
		dst[i] = value + '0';
		n = (n / 10);
		i--;
	}
	if (n <= 9)
		dst[i] = n + '0';
	return (dst);
}
