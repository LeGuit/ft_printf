/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:08:51 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/08 17:29:37 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int				read_format(const char *format, va_list arg)
{
	char		*cursor;
	t_mod		*mod;
	size_t		i;

	cursor = format;
	i = 0;
	while (cursor[i])
	{
		if (cursor[i] == '%') // thinks about counting 
		{
			if (cursor[i + 1] == '%')
				cursor[i + 1] = 0;
			else
			{
				mod.charprint = get_mod(i - 1, cursor[i + 1], &mod, arg)
				cursor[i] = 0;
			}
			ft_putstr(cursor);// need to print the arg next to it in struct maybe
			if ((cursor[i] == '%') ? cursor += i : cursor += i + 1);
		}
		i++;// check if good position
	}
	i = mod.charprint;
	return (i);
}
