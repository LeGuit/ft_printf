/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:43:54 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/15 10:11:53 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static fct_t const      g_convtab[] =
{
	['s'] = &print_s,
	['S'] = &print_s,
	['p'] = &print_p,
	['d'] = &print_i,
	['D'] = &print_i,
	['i'] = &print_i,
	['o'] = &print_i,
	['O'] = &print_i,
	['u'] = &print_i,
	['U'] = &print_i,
	['x'] = &print_i,
	['X'] = &print_i,
	['c'] = &print_i,
	['C'] = &print_i,
};

int			print_arg(t_mod *m, va_list ap)
{
	print_struct(m);
	/*	if (ft_strchr("diouxXcC", m->convers)//type int in ap "C is c +lmod"
	 *		print_i(m, va_arg(ap, int));	
	 *	else if (ft_strchr("DOU", m->convers)//type long int in ap
	 *		print_li(m, va_arg(ap, long int));
	 *	else if (ft_strchr("sS, m->convers)//type char *
	 *		print_s(m, va_arg(ap, char *);
	 *	else if (m->convers == 'p')
	 *		print_p(m, va_arg(ap, void *));
	 *///can add other type of conversion here
	va_arg(ap, int);
	return (1);
}
