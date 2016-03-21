/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:00:54 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/16 16:46:24 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_hexa(unsigned long long int arg, t_env *env)
{
	char						*tmp;
	unsigned long long int		i;
	unsigned long long int		j;

	tmp = NULL;
	i = 10;i
	j = (env->params == 'x' || env->params == 'p') ? 'a' : 'A';
	if (arg < 10)
		tmp = ft_ulltoa(arg);
	else if (arg < 16)
	{
		while (i != arg)
			i++;
		tmp = ft_strjoin_c(j + (i - 10));
	}
	return (tmp);
}

char		*ft_conv_hexa(unsigned long long int arg, t_env *env)
{
	char	*dst;
	char	*tmp;
	int		i;

	dst = ft_strdup("0");
	i = arg ? 1 : 0;
	while (arg != 0)
	{
		tmp = ft_hexa(arg % 16, env);
		dst = ft_strjoin(tmp, dst);
		arg /= 16;
	}
	if (i)
		dst = ft_strsub(dst, 0, (ft_strlen(dst) - 1));
	if ((i && env->sharp && env->params == 'x') || env->params == 'p')
		dst = ft_strjoin("0x", dst);
	else if (i && env->sharp && env->params == 'X')
		dst = ft_strjoin("0X", dst);
	return (dst);
}
