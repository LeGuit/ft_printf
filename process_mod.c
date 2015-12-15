/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 19:13:04 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/15 10:37:54 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void		process_flags(t_mod *m)
{
	if (GET(m->flag, F_ZERO) && m->prec && ft_strchr("dDioOuUixX", m->convers))
		TOGGLE(m->flag, F_ZERO);
	if (GET(m->flag, F_ZERO) && GET(m->flag, F_ZERO))
		TOGGLE(m->flag, F_ZERO);
	if (GET(m->flag, F_SPACE) &&  GET(m->flag, F_PLUS))
		TOGGLE(m->flag, F_SPACE);
}

static void		process_convers(t_mod *m)
{
	if (m->convers == 'D'
			|| m->convers == 'O' || m->convers == 'U'
			|| m->convers == 'C' || m->convers == 'S')
	{
		UNSET(m->modif, MOD_ALL);//only one mod valid ?
		SET(m->modif, MOD_L);
		m->convers = ft_tolower(m->convers);
	}
	//if (ft_strchr("s
}

void			process_mod(t_mod *m)
{
	process_flags(m);	
	process_convers(m);
}
