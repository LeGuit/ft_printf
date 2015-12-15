/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifier.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 10:21:28 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/15 10:40:11 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			modifier_di(t_mod *m, int *ap)
{
	if (GET(m->modif, MOD_HH))
		*ap = (signed char)*ap;
	else if (GET(m->modif, MOD_H))
		*ap = (short)*ap;
	else if (GET(m->modif, MOD_LL))
		*ap = (long long)*ap;
	else if (GET(m->modif, MOD_L))
		*ap = (long)*ap;
	else if (GET(m->modif, MOD_J))
		*ap = (intmax_t)*ap;
	else if (GET(m->modif, MOD_Z))
		*ap = (unsigned int)*ap;//unsigned int ?
}

void			modifier_ouxX(t_mod *m, int *ap)
{
	if (GET(m->modif, MOD_HH))
		*ap = (unsigned char)*ap;
	else if (GET(m->modif, MOD_H))
		*ap = (unsigned short)*ap;
	else if (GET(m->modif, MOD_LL))
		*ap = (unsigned long long)*ap;
	else if (GET(m->modif, MOD_L))
		*ap = (unsigned long)*ap;
	else if (GET(m->modif, MOD_J))
		*ap = (uintmax_t)*ap;
	else if (GET(m->modif, MOD_Z))
		*ap = (size_t)*ap;
}

void			modifier_sc(t_mod *m, int *ap)
{
	if (GET(m->modif, MOD_L))
	{
		if (m->convers == 's')
			*ap = (wchar_t *)*ap;
		if (m->convers == 'c')
			*ap = (wint_t)*ap;
	}
}
