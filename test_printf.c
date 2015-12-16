/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:08:34 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/16 15:32:42 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int		main(void)
{
	int i = printf("\nTest real : %-+ 10.3c WOOD", '0');
	int j = ft_printf("\nTEST mine : %-+ 10.3c WOOD", '0');
//	i = printf("\nTest real : %+10i WOOD", 1234);
//	j = ft_printf("\nTEST mine : %+10i WOOD", 1234);
	printf("Ret Value real : %d\n", i);
	printf("Ret Value mine : %d\n", j);
	return (0);
}
