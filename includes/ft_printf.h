/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:28:28 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/19 17:18:59 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
	#define FT_PRINTF_H

#include <stdarg.h>
#include "libft.h"

int		ft_printf(const char* format, ...);
int		istype_c(via_list ap);

#endif
