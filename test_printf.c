/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:08:34 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/16 11:11:01 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int		main(void)
{
	int i = printf("\nTest real : %-10X WOOD", -42);
	int j = ft_printf("\nTEST mine : %-10X WOOD", -42);
	i = printf("\nTest real : %10u WOOD", 1234);
	j = ft_printf("\nTEST mine : %10u WOOD", 1234);
	printf("Ret Value real : %d\n", i);
	printf("Ret Value mine : %d\n", j);
	return (0);
}
