/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 20:51:41 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/15 10:43:16 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			print_i(t_mod *m, int ap)
{
	int			length;

	if (m->length)
		length = length_i(m, ap);
	if (m->prec)
		prec_i(m, &ap);
	if (GET(m->modif, MOD_ALL))
		modif_i(m, &ap);//ptr on fct depending on ap
	if (GET(m->flag), F_ALL)
		flag_i(m, &ap)
}

static 

static int		length_i(t_mod *m, int ap)
{
	int			cnt;

	cnt = 0;
	while (ap)
	{
		cnt++;
		ap /= 10;
	}
	return (MAX(cnt, m->length));
}
