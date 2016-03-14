/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 16:55:43 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/26 17:01:07 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			init_flags(t_env *env)
{
	env->min = 0;
	env->plus = 0;
	env->sharp = 0;
	env->zero = 0;
	env->space = 0;
	env->precision = 0;
	env->isprecision = 0;
	env->h = 0;
	env->hh = 0;
	env->l = 0;
	env->ll = 0;
	env->j = 0;
	env->z = 0;
	env->size = 0;
	env->per_cent = 0;
}
