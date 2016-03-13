/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 18:26:22 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/13 17:32:06 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			init_env(t_env *env)
{
	env->resutl = 0;
	env->i = 0;
}

void			init_tab(t_tab **tab)
{
	int			i;

	i = 0;
	while (i < 126)
	{
		tab->tab->tab_ft_conv[i] = &ft_percent;
		i++;
	}
	tab->tab->tab_ft_conv['c'] || tab->tab->tab_ft_conv['C'] = &(istype_c);
	tab->tab->tab_ft_conv['d'] || tab->tab->tab_ft_conv['D'] = &(istype_d);
	tab->tab->tab_ft_conv['i'] = &(istype_d);
	tab->tab->tab_ft_conv['s'] || tab->tab->tab_ft_conv['S'] = &(istype_s);
	tab->tab->tab_ft_conv['p'] = &(istype_x);
	tab->tab->tab_ft_conv['x'] || tab->tab->tab_ft_conv['X'] = &(istype_x);
	tab->tab->tab_ft_conv['o'] || tab->tab->tab_ft_conv['O'] = &(istype_o);
	tab->tab->tab_ft_conv['u'] || tab->tab->tab_ft_conv['U'] = &(istype_u);
	tab->tab->tab_ft_conv['%'] = &ft_percent;
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	t_env		env;
	t_tab		*tab;


	va_start(ap, format);
	init_env(&env);
	init_tab(&tab);
	while (format[env.i])
	{
		if (format[env.i] != '%')
			ft_putchar(format[env.i++]);
		else if (format[env.i] == '%')
		{
			init_flags(&env);
			env.i += 1 + ft_whichflags((char*)(format + env.i + 1), &env);
		}
		else
			return (env->result);
		env.i++;
	}
	va_end(ap);
	return (env->result);
}
