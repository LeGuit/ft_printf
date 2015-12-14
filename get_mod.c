/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:36:07 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/14 10:46:25 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				get_mod(char *cursor, t_mod **m, va_list arg)
{
	size_t		cnt;

	cnt = 0;
	m->nbcmod = 0;
	cnt += get_flag(cursor, m);
	cnt += get_length(cursor, m);
	cnt += get_prec(cursor, m);
	cnt += get_modif(cusor, m);
	if (!(cnt += get_convers(cursor, m)))//if no valid conversion
	{
		m->nbcmod = cnt;//look where we could print
		return (0);//return something special for invalid but keep counting
	}
	process_mod(m, arg);
	return (cnt);
}

static int		get_flag(char *cursor, t_mod *m)
{
	int			i;

	i = 0;
	if (is_there_flags(*cursor))
	{
		while (cursor[i] == '#' || cursor[i] == '0' || cursor[i] == '-'
				|| cursor[i] == '+' || cursor[i] == ' ')
		{
			m->flags[i] = cursor[i];
			i++;
		}
	}
	return (i);
}

static int		get_length(char *cursor, t_mod *m)
{
	int			i;

	i = 0;
	if (cursor[i] == '0')
	{
		m.flagprec = 1;
		i++;
	}
	if (m.ilength = ft_atoi(cursor))
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

static int		get_prec(char *cursor, t_mod *m)
{
	int			i;

	i = 0;
	if(is_there_prec(cursor))
		i++;
	if (m.iprec = ft_atoi(cursor))
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

static int		get_modif(char *cursor, t_mod *m)
{
	int			i;

	i = 0;
	if(is_there_modif(cursor))
	{
		m->modif[i] = cursor[i];
		i++;
		if (is_there_modif(cursor + 1))
		{
			m->modif[i] = cursor[i];
			i++;
		}
	}
	return (i);
}
