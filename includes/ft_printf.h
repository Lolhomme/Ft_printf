/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:28:28 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/26 17:01:16 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "ft_printf.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct				s_env
{
	int						min;
	int						plus;
	int						sharp;
	int						zero;
	int						space;
	int						precision;
	int						isprecision;
	int						h;
	int						hh;
	int						l;
	int						ll;
	int						j;
	int						z;
	int						size;
	int						per_cent;
	char		params;
	int						result;
	int						i;
}							t_env;

typedef struct				s_tab
{
	int						(*tab_ft_conv[126])(va_list ap, t_env *env);
}							t_tab

int		ft_printf(const char *format, ...);
//int		ft_whichtype(char *format);
int		ft_wichflags(char *format);
int		istype_c(va_list ap);
int		istype_d(va_list ap);
int		istype_s(va_list ap);
int		intlen(int nb);

#endif
