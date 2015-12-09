/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:36:07 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/09 13:34:25 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				get_mod(int nb_char, char *cursor, t_mod **mod, va_list arg)
{
	size_t	cnt;

	mod->nbcmod = 0;
	*(mod->charprint) += nb_char; //add read char before next %
	
	process_mod(mod, arg);

}
//double * for int ?
static int		get_flag(char *cursor, t_mod *mod)
{
	//faire int
	if (is_there_flags(*cursor))
	{
		while (*cursor == '#' || *cursor == '0' || *cursor == '-'
				|| *cursor == '+' || *cursor == ' ')
		{
			*(mod->flags) = *cursor;
			cursor++;
		}
	}
}

static int		get_length(char *cursor, t_mod *mod)
{
	if (*cursor == '0')
	{
		mod.flagprec = 1;
		cursor++;
	}
	if (mod.ilength = ft_atoi(cursor))
	{
		while(ft_isdigit(*cursor))
				cursor++;
	}
	else if (*cursor == '*')
	{
		clength == '*';
		cursor++;
	}
}

static int		get_prec(char *cursor, t_mod *mod)
{
	if(is_there_prec(cursor))
		cursor++;
	if (mod.iprec = ft_atoi(cursor))
	{
		while(ft_isdigit(*cursor))
				cursor++;
	}
	else if (*cursor == '*')
	{
		cprec == '*';
		cursor++;
	}
}

static int		get_modif(char *cursor, t_mod *mod)
{
}
// need get_convers
