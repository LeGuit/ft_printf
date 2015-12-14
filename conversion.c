/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:39:49 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/14 11:27:59 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static fct_t const		g_convtab[] =
{
	['s'] = &conv_s;
	['S'] = &conv_ups;
	['p'] = &conv_p;
	['d'] = &conv_d;
	['D'] = &conv_upd;
	['i'] = &conv_i;
	['o'] = &conv_o;
	['O'] = &conv_upo;
	['u'] = &conv_u;
	['U'] = &conv_u;
	['x'] = &conv_x;
	['X'] = &conv_upx;
	['c'] = &conv_c;
	['C'] = &conv_upc;
};

int						call_conv(t_mod *mod, fct_t (*f)(t_mod *m, va_list(va)))
{

}

int						get_convers(char *cursor, t_mod *m, va_list va)
{
	if (*cursor != 's' && *cursor != 'S' && *cursor != 'p' && *cursor != 'd'
			&& *cursor != 'D' && *cursor != 'i' && *cursor != 'o'
			&& *cursor != 'O' && *cursor != 'u' && *cursor != 'U'
			&& *cursor != 'x' && *cursor != 'X' && *cursor != 'c'
			&& *cursor != 'C') 
		return (0);
	g_convtab[*cursor](mod, va);
	return (1);
}













}
