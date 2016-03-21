/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istype_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 17:19:12 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 15:48:58 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int			ft_l_c(va_list ap, t_env *env)
{
	wint_t	arg;
	int		i;

	arg = (wchar_t)va_arg(ap, wint_t);
	ft_conv_unicode(arg, env);
	i = ft_print_c(env);
	free(env->quest);
	return (i);
}

static char			ft_uchar(va_list ap)
{
	int		arg;
	char	arg2;

	arg = va_arg(ap, int);
	arg2 = (char)arg;
	return (arg2);
}

int					istype_c(va_list ap, t_env *env)
{
	char	arg;
	int		i;

	if (env->l || env->params == 'C')
		i = ft_l_c(ap, env);
	else
	{
		arg = ft_uchar(ap);
		i = ft_print_char_c(arg, env);
	}
	return (i);
}
