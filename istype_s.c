/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istype_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 13:57:05 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/14 14:00:15 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	ft_l_s(va_list ap, t_env *env)
{
	wchar_t	*arg;
	int		i;

	i = 0;
	arg = va_arg(ap, wchar_t *);
	if (arg == NULL)
		env->world = NULL;
	else if (arg[0] == 0)
		return (0);
	else if (arg)
	{
		while (arg[i])
		{
			ft_printf_conv_unicode(arg[i], env);
			if (i == 0 && env->quest)
				env->world = ft_strdup(env->quest);
			else
				env->world = ft_strcat(env->world, env->quest);
			i++;
			free(env->quest);
		}
	}
	i = ft_print_s(env);
	return (i);
}

int			istype_s(va_list ap, t_env *env)
{
	char	*arg;
	int		i;

	i = 0;
	if (env->l || env->spec == 'S')
	{
		env->world = NULL;
		i = ft_l_s(ap, env);
	}
	else
	{
		arg = va_arg(ap, char *);
		i = ft_print_string(arg, env);
	}
	return (i);
}
