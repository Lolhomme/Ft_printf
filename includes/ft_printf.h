/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:28:28 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/13 17:33:16 by alaulom          ###   ########.fr       */
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
# include <wchar.h>

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
	char		*quest;
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
void	ft_options(char c, t_env *env);
int		ft_width(char *s, t_env *env);
int		ft_precision(char *s, , t_env *env);
int		ft_size_options(char *s, t_env *env);
int		ft_percent(va_list ap, t_env *env);
static int		ft_minus(int size, char c);
static int		ft_zero(int size, char c);
static int		ft_space(int size, char c);
int		istype_c(va_list ap, t_env *env);
static int	ft_l_c(va_list ap, t_env *env);
static char	ft_uchar(va_list ap);
int		istype_d(va_list ap);
int		istype_s(va_list ap);
int		intlen(int nb);

#endif
