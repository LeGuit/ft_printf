/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:36:07 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/09 17:38:48 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				get_mod(char *cursor, t_mod **mod, va_list arg)
{
	size_t		cnt;

	cnt = 0;
	mod->nbcmod = 0;
	cnt += get_flag(cursor, mod);
	cnt += get_length(cursor, mod);
	cnt += get_prec(cursor, mod);
	cnt += get_modif(cusor, mod);
	if (!(cnt += get_convers(cursor, mod)))//if no valid conversion
			return (cnt);
	process_mod(mod, arg);

}

static int		get_flag(char *cursor, t_mod *mod)
{
	int			i;

	i = 0;
	if (is_there_flags(*cursor))
	{
		while (cursor[i] == '#' || cursor[i] == '0' || cursor[i] == '-'
				|| cursor[i] == '+' || cursor[i] == ' ')
		{
			mod->flags[i] = cursor[i];
			i++;
		}
	}
	return (i);
}

static int		get_length(char *cursor, t_mod *mod)
{
	int			i;

	i = 0;
	if (cursor[i] == '0')
	{
		mod.flagprec = 1;
		i++;
	}
	if (mod.ilength = ft_atoi(cursor))
	{
		while(ft_isdigit(cursor[i]))
				i++;
	}
	else if (cursor[i] == '*')
	{
		clength == '*';
		i++;
	}
	return (i);
}

static int		get_prec(char *cursor, t_mod *mod)
{
	int			i;

	i = 0;
	if(is_there_prec(cursor))
		i++;
	if (mod.iprec = ft_atoi(cursor))
	{
		while(ft_isdigit(cursor[i]))
				i++;
	}
	else if (cursor[i] == '*')
	{
		cprec == '*';
		i++;
	}
	return (i);
}

static int		get_modif(char *cursor, t_mod *mod)
{
	int			i;

	i = 0;
	if(is_there_modif(cursor))
	{
		mod->modif[i] = cursor[i];
		i++;
		if (is_there_modif(cursor + 1))
		{
			mod->modif[i] = cursor[i];
			i++;
		}
	}
	return (i);
}
