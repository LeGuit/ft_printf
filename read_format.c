/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:08:51 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/08 16:51:21 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
int				read_format(const char *format, va_list arg)
{
	char		*cursor;
	t_mod		*mod;
	size_t		i;

	cursor = format;
	mod.charprint = 0;
	i = 0;
	while (cursor[i])
	{
		if (cursor[i] == '%' && cursor[i + 1] != '%')//get a mod
		{
			cursor[i] = 0;
			ft_putstr(cursor);
			i += get_mod(i - 1, cursor[i + 1], &mod, arg); 	// return i on end of mod + 1 (i - 1 for nb_char cause whe don't count the %)
			cursor += i;									// care of exact size of mod
			i = -1;
		}
		i++;
	}
	i = mod.charprint;
	return (i);
}
