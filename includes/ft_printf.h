/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:28:28 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/23 18:47:38 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int nb);
//int		ft_atoi(const char *str);
char	*ft_itoa(int i);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);

int		ft_printf(const char *format, ...);
int		ft_whichtype(va_list ap, char c);
int		istype_c(va_list ap);
int		istype_d(va_list ap);
int		istype_s(va_list ap);
int		intlen(int nb);

#endif
