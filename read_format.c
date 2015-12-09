/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:08:51 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/09 13:25:51 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int				read_format(const char *format, va_list arg)
{
	const char	*cursor;
	t_mod		*mod;
	size_t		i;

	cursor = format;
	i = 0;
	reset(mod);
	while (cursor[i])
	{
		if (cursor[i] == '%') // thinks about counting 
		{
			if (cursor[i + 1] == '%')
				i++;
			else
				mod.nbcmod = get_mod(i - 1, cursor[i + 1], &mod, arg);
			ft_putnstr(cursor, i);
			if (nbcmod)
				((mod->chararg) ? ft_putstr(chararg) : ft_putnbr(intarg));
			cursor += (i + mod.nbcmod + 1);
			i = -1;
		}
		i++;
	}
	i = mod.charprint;
	return (i);
}

static void		reset(t_mod *mod)
{
	mod->flags = ft_bzero(mod->flags, 6);
	mod->clength = 0;
	mod->ilength = 0;
	mod->flagprec = 0;
	mod->cprec = 0;
	mod->iprec = 0;
	mod->modif = ft_bzero(mod->modif, 3);
	mod->convers = 0;
	mod->charprint = 0;
	mod->intarg = 0;
	mod->chararg = 0;
	mod->nbcmod = 0;
}
