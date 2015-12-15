/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:39:49 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/15 13:11:23 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
//maybe directly in get_mod
int						get_convers(char cursor, t_mod *m)
{
	if (!ft_strchr("sSpdDioOuUxXcC", cursor))
		return (0);
	m->convers = cursor;
	return (1);
}

