/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:39:49 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/09 17:47:52 by gwoodwar         ###   ########.fr       */
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
