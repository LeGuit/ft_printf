/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:23:06 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/15 16:57:49 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static t_ull get_arg_u(t_mod *m, va_list ap)
{
	if (GET(m->modif, MOD_HH))
		return ((t_ull)(unsigned char)va_arg(ap, int));
	if (GET(m->modif, MOD_H))
		return ((t_ull)(unsigned short)va_arg(ap, int));
	if (GET(m->modif, MOD_LL))
		return ((t_ull)va_arg(ap, unsigned long));
	if (GET(m->modif, MOD_L))
		return (va_arg(ap, t_ull));
	if (GET(m->modif, MOD_J))
		return ((t_ull)va_arg(ap, uintmax_t));
	if (GET(m->modif, MOD_Z))
		return ((t_ull)va_arg(ap, size_t));
}

int			print_u(t_mod *m, va_list  ap)
{
	int		cnt;
	t_ull	arg;
	char	*print;

	arg = get_arg_u(m, ap);
	((GET(m->flag, F_MINUS) ? ft_space_u(arg) : ft_putstr(print)));
	((GET(m->flag, F_MINUS) ? ft_putstr(print) : ft_space(len)));
}
