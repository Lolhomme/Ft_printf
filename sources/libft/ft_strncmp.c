/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:16:04 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:04:50 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	while (s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0' && j < n)
	{
		j++;
	}
	if (j == n)
		return ((unsigned char)s1[j - 1] - (unsigned char)s2[j - 1]);
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}
