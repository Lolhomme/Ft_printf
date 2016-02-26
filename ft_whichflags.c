/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 13:15:30 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/26 17:16:47 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			ft_whichflags(char *format, t_env *env)
{
	int		i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '#' || format[i] == '-' || format[i] == '+' ||
				format[i] == ' ')
			ft_options(format[i], env);
		else if (ft_isdigit(format[i]) && env->isprecision == 0)
			i =+ ft_width(&format[i], env);
		else if (format[i] == '.')
			i += ft_precision(&format[i], env);
		else if (format[i] == 'h' || format[i] == 'l' || format[i] == 'j'
				|| format[i] == 'z')
			i += ft_size_options(&format[i], env);
		else
		{
			env->params = format[i];
			return (i);
		}
		i++;
	}
	return (i);
}
