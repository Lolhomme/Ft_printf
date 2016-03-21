/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 15:05:33 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/21 16:32:16 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_putnbr_ll(long long int nb)
{
	if (nb > LLONG_MAX || nb < LLONG_MIN)
		return ;
	if (nb == LLONG_MIN)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_ll(nb / 10);
		ft_putnbr_ll(nb % 10);
	}
	else if (nb <= 9)
		ft_putchar(nb + '0');
}
