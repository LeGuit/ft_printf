# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 12:02:13 by gwoodwar          #+#    #+#              #
#    Updated: 2015/12/17 13:20:34 by gwoodwar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc
FLAGS =		-Wall -Wextra -Werror
NAME =		libftprintf.a
LIB_NAME =	libft/libft.a
TMPNAME =	ft_printf
LIB =		-I libft/includes
HEAD =		-I includes/
LFT =		-L libft/ -lft

SRCS =		ft_printf.c \
			get_mod.c \
			ft_vprintf.c \
			conversion.c \
			misc.c \
			print_arg.c \
			process_mod.c \
			print_u.c \
			print_sign.c \
			print_str.c \
			print_c.c \
			#main_test.c
			#test_printf.c \

OBJS =		$(SRCS:.c=.o)

all:		$(NAME)

libft/libft.a:
	make -C libft/ fclean
	make -C libft/

#$(TMPNAME):	$(LIB_NAME) $(OBJS)
#	$(CC) $(FLAGS) -o $@ $(OBJS) $(LFT)

# Final MAKEFILE

$(NAME):	$(LIB_NAME) $(OBJS)
	ar rc $@ $^
	ranlib $@

%.o:		%.c
	$(CC) $(FLAGS) $(LIB) $(HEAD) -o $@ -c $<

clean:
	/bin/rm -f $(OBJS)
	make -C libft/ fclean

fclean: 	clean
	/bin/rm -f $(NAME)

re: 		fclean all
