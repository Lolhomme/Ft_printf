/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:52:07 by agauci-d          #+#    #+#             */
/*   Updated: 2014/11/08 14:58:20 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	size_t			i;
	unsigned char	*h;

	a = (unsigned char)c;
	h = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		h[i] = a;
		i++;
	}
	return (h);
}
