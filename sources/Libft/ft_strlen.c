/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:58:21 by alaulom           #+#    #+#             */
/*   Updated: 2015/12/08 13:18:39 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t			ft_strlen(const char *s)
{
	size_t		a;

	if (!s)
		return (0);
	a = 0;
	while (s[a])
		a++;
	return (a);
}
