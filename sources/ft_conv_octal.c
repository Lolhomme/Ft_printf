/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_octal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:00:17 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/16 16:46:36 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_octal(unsigned long long int arg, t_env *env)
{
	char	*dst;
	int		i;

	dst = ft_strdup("0");
	i = arg ? 1 : 0;
	while (arg != 0)
	{
		dst = ft_strjoin(ft_ulltoa((arg % 8)), dst);
		arg /= 8;
	}
	if (i)
		dst = ft_strsub(dst, 0, (ft_strlen(dst) - 1));
	if (i && env->sharp)
		dst = ft_strjoin("0", dst);
	return (dst);
}
