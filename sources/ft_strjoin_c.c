/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 16:12:31 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 16:12:49 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_strjoin_c(char c)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * 2);
	if (!dst)
		return (NULL);
	dst[0] = c;
	dst[1] = '\0';
	return (dst);
}
