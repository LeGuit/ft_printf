/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:55:02 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/16 11:03:24 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		print_struct(t_mod *m)
{
	ft_putendl("\nFLAGS   :");
	ft_putendl("#0- +");
	PRINT(m->flag, F_HASH);
	PRINT(m->flag, F_ZERO);
	PRINT(m->flag, F_MINUS);
	PRINT(m->flag, F_SPACE);
	PRINT(m->flag, F_PLUS);
	ft_putstr("\nLENGTH  : ");
	ft_putnbr(m->length);
	ft_putstr("\nPREC    : ");
	ft_putnbr(m->prec);
	ft_putendl("\nMODIF   :");
	ft_putstr("hh: ");	PRINT(m->modif, MOD_HH); ft_putchar('\n');
	ft_putstr("h : ");	PRINT(m->modif, MOD_H); ft_putchar('\n');
	ft_putstr("ll: ");	PRINT(m->modif, MOD_LL); ft_putchar('\n');
	ft_putstr("l : ");	PRINT(m->modif, MOD_L); ft_putchar('\n');
	ft_putstr("z : ");	PRINT(m->modif, MOD_Z); ft_putchar('\n');
	ft_putstr("j : ");	PRINT(m->modif, MOD_J); ft_putchar('\n');
	ft_putstr("CONVERS : ");
	ft_putchar(m->convers);
	ft_putchar('\n');
}
size_t   ft_space(t_mod *m, size_t size)
{
	int      cnt;

	cnt = 0;
	while (cnt < (int)(m->length - size))
	{
		ft_putchar(' ');
		cnt++;
	}
	return (cnt);
}
