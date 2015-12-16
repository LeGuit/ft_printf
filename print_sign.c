/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 11:42:51 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/16 11:57:39 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static t_ll		get_arg_sign(t_mod *m, va_list ap)
{
	if (GET(m->modif, MOD_HH))
		return ((t_ll)(signed char)va_arg(ap, int));
	if (GET(m->modif, MOD_H))
		return ((t_ll)(short)va_arg(ap, int));
	if (GET(m->modif, MOD_LL))
		return ((t_ll)va_arg(ap, long));
	if (GET(m->modif, MOD_L))
		return (va_arg(ap, t_ll));
	if (GET(m->modif, MOD_J))
		return ((t_ll)va_arg(ap, intmax_t));
	if (GET(m->modif, MOD_Z))
		return ((t_ll)va_arg(ap, int));
	else
		return ((t_ll)va_arg(ap, int));
}

static char     *get_buf(t_mod *m, t_ll arg, char *buf)
{
	if (m->convers == 'd')
		return (ft_slltstr(arg, buf));
	if (m->convers == 'i')
		return (ft_slltstr(arg, buf));
	return (0);
}

int             print_sign(t_mod *m, va_list ap)
{
	size_t      cnt;
	t_ull       arg;
	char        buf[128];

	arg = get_arg_sign(m, ap);
	get_buf(m, arg, buf);
	if (!m->prec && buf[0] == '0')
		buf[0] = 0;
	cnt = ft_strlen(buf);
	if (GET(m->flag, F_MINUS))
	{
		ft_putstr(buf);
		cnt += ft_space(m, cnt);
	}
	else
	{
		cnt += ft_space(m, cnt);
		ft_putstr(buf);
	}
	return (cnt);
}
