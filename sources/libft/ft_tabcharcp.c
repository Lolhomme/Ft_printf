/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcharcp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/03 20:42:58 by agauci-d          #+#    #+#             */
/*   Updated: 2015/01/04 17:27:51 by agauci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdlib.h>
#include <stdio.h>

void ft_tabcharcp(char **s, char ***dst)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (s[i] != NULL && s)
		i++;
	(*dst) = (char **)malloc(sizeof(char*) * (i + 1));
	if (dst == NULL)
		ft_error("malloc in ft_tabcharcp() failed :");
	i = 1;
	while (s[i] && s)
	{
		(*dst)[i - 1] = (char *)malloc(sizeof(char) * (ft_strlen(s[i]) + 1));
		if ((*dst)[i - 1] == NULL)
			ft_error("malloc in ft_tabcharcp() failed :");
		while (s[i][++j])
			(*dst)[i - 1][j] = s[i][j];
		(*dst)[i - 1][j] = '\0';
		i++;
		j = -1;
	}
	(*dst)[i - 1] = NULL;
}
