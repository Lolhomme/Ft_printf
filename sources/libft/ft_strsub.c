/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:26:23 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/22 14:10:37 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ret;

	if (!s || !(*s) || !len)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ret = str;
	s += start;
	while (len--)
		*str++ = *s++;
	*str = 0;
	return (ret);
}
