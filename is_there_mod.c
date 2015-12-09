/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_there_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:57:07 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/09 16:34:15 by gwoodwar         ###   ########.fr       */
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
	if (ft_atoi(length) || *length == '*')
		return (1);
	return (0);
}

int			is_there_prec(char *prec)
{
	if (*prec == '.')
		return (1);
	return (0);
}

int			is_there_modif(char *modif)
{
	if (*modif == 'h'
			|| *modif == 'l'
			|| *modif == 'j'
			|| *modif == 'z')
		return (1);
	return (0);
}
