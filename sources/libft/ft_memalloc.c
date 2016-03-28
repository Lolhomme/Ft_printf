/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:34:56 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 12:57:11 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	char	*a;
	size_t	i;

	a = (char *)malloc(sizeof(char) * (size));
	i = 0;
	if (!a)
		return (NULL);
	if (size != 0)
	{
		while (i < size)
		{
			a[i] = '\0';
			i++;
		}
		return ((void *)a);
	}
	return (NULL);
}
