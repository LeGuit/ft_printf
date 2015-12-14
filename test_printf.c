/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:08:34 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/14 20:11:00 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int		main(void)
{
	int i = printf("\nTest real : %#010.2f WOOD %-.*d NO CONV %-0 3zk", 1234.5678, 3, 42);
	int j = ft_printf("\nTEST mine : %#010.2d WOOD %-.*d NO CONV %-0 3zk", 1234.5678, 3, 42);
	printf("Ret Value real : %d\n", i);
	printf("Ret Value mine : %d\n", j);
	return (0);
}
