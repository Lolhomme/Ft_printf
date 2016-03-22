/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:53:28 by agauci-d          #+#    #+#             */
/*   Updated: 2014/11/09 19:47:28 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int egal;

	if (!s1 || !s2)
		return (0);
	egal = ft_strncmp(s1, s2, n);
	if (egal > 0 || egal < 0)
		return (0);
	return (1);
}
