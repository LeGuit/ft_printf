/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:20:08 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/09 12:05:17 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include <stdarg.h>

typedef struct		s_mod
{
	char			flags[6];
	char			clenght;
	int				ilenght;
	int				flagprec;
	char			cprec;
	int				iprec;
	char			modif[3];
	char			convers;
	size_t			charprint;/*add all printed char i + mod*/
	int				intarg;
	char			*chararg;
	int				nbcmod;
}					t_mod;

#endif
