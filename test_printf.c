/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:08:34 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/16 16:11:35 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int		main(void)
{
	char buf[3] = {'a','b','\0'};

	int i = printf("\nTest real : %-+ 10p WOOD", &buf);
	int j = ft_printf("\nTEST mine : %-+ 10p WOOD", &buf);
	i = printf("\nTest real : %#+10x WOOD", 1234);
	j = ft_printf("\nTEST mine : %#+10x WOOD", 1234);
	printf("Ret Value real : %d\n", i);
	printf("Ret Value mine : %d\n", j);
	return (0);
}
