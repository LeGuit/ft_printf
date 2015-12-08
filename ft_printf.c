/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:53:31 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/08 16:34:03 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			ft_printf(const char *format, ...)
{
	va_list		arg;
	int			res;

	va_start(arg, format);
	res = smthing(format, arg);
	va_end(arg, format);
	return (res);
}
