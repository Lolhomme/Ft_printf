/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_arg_null.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 15:22:19 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/16 15:22:40 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_size_arg_null(int i, char *c, int j)
{
	while (i < j)
	{
		write(1, c, ft_strlen(c));
		i += ft_strlen(c);
	}
	return (i);
}
