/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_there_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:57:07 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/08 17:29:33 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			is_there_flags(char flag)
{
	if (flag == '#'
			|| flag == '0'
			|| flag == '-'
			|| flag == '+'
			|| flag == ' ')
		return (1);
	return (0);
}

int			is_there_lenght(char *lenght)
{
	int		i;

	if (ft_atoi(length))
	{
		while (ft_isdigit(length))
			lenght++;
		if (*lenght == '*')

}
