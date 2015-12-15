/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:43:54 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/15 16:34:54 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static fct_t const      g_convtab[] =
{
	['s'] = &print_s,
	['S'] = &print_s,
	['p'] = &print_p,
	['d'] = &print_sign,
	['D'] = &print_sign,
	['i'] = &print_sign,
	['o'] = &print_u,
	['O'] = &print_u,
	['u'] = &print_u,
	['U'] = &print_u,
	['x'] = &print_u,
	['X'] = &print_u,
	['c'] = &print_c,
	['C'] = &print_c
};

int			print_arg(t_mod *m, va_list ap)
{
	int		cnt;

	print_struct(m);//get the va at the conv fct
//	process_flags(m);
//	process_modifier(m);
	cnt = g_convtab[m->convers](m, ap); 
	va_arg(ap, int);
	//return (cnt);
	return (1);
}
