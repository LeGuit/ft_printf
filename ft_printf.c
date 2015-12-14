/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:53:31 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/14 10:11:00 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			ft_printf(const char *format, ...)
{
	va_list		va_ptr;
	int			res;

	va_start(va_ptr, format);
	res = smthing(format, va_ptr);
	va_end(va_pt);
	return (res);
}
