/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:28:28 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/23 11:57:05 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
	#define FT_PRINTF_H

#include "~/Libft/includes/libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int		ft_printf(const char* format, ...);
int		ft_whichtype(const char*s, int i, va_list ap);
int		istype_c(va_list ap);

#endif
