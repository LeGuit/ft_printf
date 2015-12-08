/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:36:07 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/08 17:29:28 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				get_mod(int nb_char, char *headmod, t_mod **mod, va_list arg)
{
	size_t		cnt;
	
	(*mod)->charprint += nb_char; //add read char before next %
	cnt = 0;
	
	process_mod(mod, arg);
	return (cnt);
}

static int		get_flag(char *curmod, t_mod **mod)
{
	int		i;

	i = 0;
	if (is_there_flags(*curmod))
	{
		(*mod)->flags = ft_bzero((*mod)->flags, 6);
		while (curmod[i] == '#' || curmod[i] == '0' || curmod[i] == '-'
				|| curmod[i] == '+' || *curmod[i] == ' ')
		{
			mod->flags[i] = curmod[i];
			i++;
		}
	}
	return (0);
}

static int		get_lenght(char *curmod, t_mod **mod)
{
}

static int		get_prec(char *curmod, t_mod **mod)
{
}

static int		get_modif(char *curmod, t_mod **mod)
{
}
// need get_convers
