/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:39:49 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/15 09:54:29 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
/*
static fct_t const		g_convtab[] =
{
	['s'] = &conv_s,
	['S'] = &conv_ups,
	['p'] = &conv_p,
	['d'] = &conv_d,
	['D'] = &conv_upd,
	['i'] = &conv_i,
	['o'] = &conv_o,
	['O'] = &conv_upo,
	['u'] = &conv_u,
	['U'] = &conv_u,
	['x'] = &conv_x,
	['X'] = &conv_upx,
	['c'] = &conv_c,
	['C'] = &conv_upc,
};*/

int						get_convers(char cursor, t_mod *m)
{
	//if (!ft_strchr("sSpdDioOuUxXcC", cursor)
	//	return (0);
	//m->convers = cursor;
	//return (1);
	if (cursor != 's' && cursor != 'S' && cursor != 'p' && cursor != 'd'
			&& cursor != 'D' && cursor != 'i' && cursor != 'o'
			&& cursor != 'O' && cursor != 'u' && cursor != 'U'
			&& cursor != 'x' && cursor != 'X' && cursor != 'c'
			&& cursor != 'C') 
		return (0);
	m->convers = cursor;
	return (1);
}
