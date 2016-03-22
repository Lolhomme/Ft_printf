/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 15:18:22 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/22 15:28:27 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			init_tab_conv(t_tab *tab)
{
	int			i;

	i = 0;
	while (i < 126)
	{
		tab->tab_ft_conv[i] = &ft_percent;
		i++;
	}
	tab->tab_ft_conv['c'] = &(istype_c);
	tab->tab_ft_conv['C'] = &(istype_c);
	tab->tab_ft_conv['d'] = &(istype_d);
	tab->tab_ft_conv['D'] = &(istype_d);
	tab->tab_ft_conv['i'] = &(istype_d);
	tab->tab_ft_conv['s'] = &(istype_s);
	tab->tab_ft_conv['S'] = &(istype_s);
	tab->tab_ft_conv['p'] = &(istype_x);
	tab->tab_ft_conv['x'] = &(istype_x);
	tab->tab_ft_conv['X'] = &(istype_x);
	tab->tab_ft_conv['o'] = &(istype_o);
	tab->tab_ft_conv['O'] = &(istype_o);
	tab->tab_ft_conv['u'] = &(istype_u);
	tab->tab_ft_conv['U'] = &(istype_u);
	tab->tab_ft_conv['%'] = &ft_percent;
}

void		init_tab(t_tab *tab)
{
	init_tab_conv(tab);
}
