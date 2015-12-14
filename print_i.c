/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 20:51:41 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/14 21:02:30 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			print_i(t_mod *m, int ap)//mayne print_all
{
	if (GET(m->modif, MOD_ALL))
		modif_i(m, &ap);//ptr on fct depending on ap
	if (m->length)
		length_i(m, &ap);
	if (m->prec)
		prec_i(m, &ap);
	if (GET(m->flag), F_ALL)
		flag_i(m, &ap)
	
}
