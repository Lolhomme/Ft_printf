/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:28:28 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/19 18:08:05 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
	#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int		ft_printf(const char* format, ...);
int		ft_whichtype(const char*s, int i, va_list ap);
int		istype_c(va_list ap);
void	ft_putchar(char c);
void	ft_putstr(const char* s);
void	ft_putnbr(int nb);
size_t	ft_strlen(const char* s);

#endif
