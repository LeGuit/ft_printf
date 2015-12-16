/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:23:06 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/16 15:57:30 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static t_ull	get_arg_u(t_mod *m, va_list ap)
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
	else
		return ((t_ull)va_arg(ap, unsigned int));
}

static void		get_buf(t_mod *m, t_ull arg, char *buf)
{
	if (m->convers == 'o')
		ft_ulltstr_base(arg, "01234567", buf);
	if (GET(m->flag, F_HASH))
	{
		buf[0] = '0';
		if (m->convers == 'x')
		{
			buf[1] = 'x';
			ft_ulltstr_base(arg, "0123456789abcdef", buf + 2);
		}
		if (m->convers == 'X')
		{
			buf[1] = 'X';
			ft_ulltstr_base(arg, "0123456789ABCDEF", buf + 2);
		}
	}
	if (!GET(m->flag, F_HASH))
	{
		if (m->convers == 'x')
			ft_ulltstr_base(arg, "0123456789abcdef", buf);
		if (m->convers == 'X')
			ft_ulltstr_base(arg, "0123456789ABCDEF", buf);
	}
	if (m->convers == 'u')
		ft_ulltstr_base(arg, "0123456789", buf);
}

int				print_u(t_mod *m, va_list ap)
{
	size_t		cnt;
	t_ull		arg;
	char		buf[128];

	arg = get_arg_u(m, ap);
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
