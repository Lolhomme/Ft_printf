/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:11:31 by agauci-d          #+#    #+#             */
/*   Updated: 2016/03/28 13:08:54 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isintfullofzero(const char *str, int k, int counter)
{
	while ((ft_isdigit(str[k])) && str[k] == '0')
		k++;
	if (counter - k > 0 && counter - k < 11)
		return (1);
	return (-1);
}

static int	ft_isintlimit(const char *str)
{
	int		i;
	int		sign;

	i = 0;
	sign = (str[i] == '-' ? -1 : 1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (ft_isdigit(str[i]) && str[i] > 2 && ft_isdigit(str[i + 1]) &&
			str[i + 1] > 1 && ft_isdigit(str[i + 2]) && str[i + 2] > 4 &&
			ft_isdigit(str[i + 3]) && str[i + 3] > 7 && ft_isdigit(str[i + 4])
			&& str[i + 4] > 4 && ft_isdigit(str[i + 5]) && str[i + 5] > 8 &&
			ft_isdigit(str[i + 6]) && str[i + 6] > 3 && ft_isdigit(str[i + 7])
			&& str[i + 7] > 6 && ft_isdigit(str[i + 8]) && str[i + 8] > 4)
		return (-1);
	if (ft_isdigit(str[i + 9]) && str[i + 9] > 8)
	{
		if (sign == 1 && str[i + 9] > 7)
			return (-1);
		return (-1);
	}
	return (1);
}

static int	ft_isfuturintvalid(const char *str)
{
	int		counter;
	int		i;
	int		j;
	int		k;

	i = 0;
	counter = 0;
	j = 0;
	k = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	j = i;
	if (str[i] == '-' || str[i] == '+')
		i++;
	k = i;
	while (ft_isdigit(str[i++]))
		counter++;
	if (counter > 11)
		return (ft_isintfullofzero(str, k, counter));
	if (counter == 11)
		return (ft_isintlimit(&str[j]));
	return (1);
}

int			ft_atoi(const char *str)
{
	int		sign;
	int		number;
	int		figure;
	int		i;

	sign = 0;
	number = 0;
	figure = 0;
	i = 0;
	if (ft_isfuturintvalid(str) == -1)
		return (-1 * (sign = (str[i] == '-' ? 0 : 1)));
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	sign = (str[i] == '-' ? -1 : 1);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		figure = (int)(str[i] - '0');
		number = (number * 10) + figure;
		i++;
	}
	return (number * sign);
}
