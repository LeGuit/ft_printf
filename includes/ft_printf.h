/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:20:08 by gwoodwar          #+#    #+#             */
/*   Updated: 2015/12/08 16:19:33 by gwoodwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include <stdarg.h>

typedef struct		s_mod
{
	char			flag;
	char			clenght;
	int				ilenght;
	char			cprec;
	int				iprec;
	char			fmodif;
	char			smodif;
	char			convers;
	size_t			charprint;//add all printed char from mod to add at last to i
}					t_mod;

#endif
