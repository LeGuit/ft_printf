/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:08:51 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/08 16:23:20 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

{
	char		*cursor;
	t_mod		*mod;
	size_t		i;//count char printed

	cursor = format;
	i = 0;
	while (cursor[i])
	{
		if (cursor[i] == '%' && cursor[i + 1] != '%')//get a mod
		{
			cursor[i] = 0;
			ft_putstr(cursor);
			i += get_mod(cursor[i + 1], &mod); 	// return i on end of mod + 1
			cursor += i;						// care of i++ end of if
		}
		i++;
	}
	i += mod.charprint;
	return (i);
}
