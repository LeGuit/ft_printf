/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 10:34:33 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/14 15:59:46 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static char		*mod_arg_s(t_mod *m, char *s)
{
	if (!*(m->flags) && !m->ilength && !m->iprec)
		return (s);
	if (m->iprec >= 0)
		s[m->iprec] = '\0';
	if (!*(m->flags))//change res with s
		return (padding_right(m, s));
	else
		return (padding_left(m, s));
}

int				conv_s(t_mod *m, va_list va)
{
	char		*s;

	s = va_arg(va, char *);
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	else if (!s)
		return (0);
	else
		ft_putstr(mod_arg_s(m, s));
	return (ft_strlen(s));
}
