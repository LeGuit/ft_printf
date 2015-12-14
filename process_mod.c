/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 19:13:04 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/14 20:02:46 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void		process_flags(t_mod *m)
{
	if (GET(m->flag, F_ZERO) && m->prec && ft_strchr("dDioOuUixX", m->convers))
		UNSET(m->flag, F_ZERO);
	if (GET(m->flag, F_ZERO) && GET(m->flag, F_ZERO))
		UNSET(m->flag, F_ZERO);
	if (GET(m->flag, F_SPACE) &&  GET(m->flag, F_PLUS))
		UNSET(m->flag, F_SPACE);
}

static void		process_convers(t_mod *m)
{
	if (m->convers == 'D'
			|| m->convers == 'O' || m->convers == 'U'
			|| m->convers == 'C' || m->convers == 'S')
	{
		SET(m->modif, MOD_L);
		m->convers = ft_tolower(m->convers);
	}
}

void			process_mod(t_mod *m)
{
	process_flags(m);	
	process_convers(m);
}
