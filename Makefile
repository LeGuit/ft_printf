# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwoodwar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 12:02:13 by gwoodwar          #+#    #+#              #
#    Updated: 2015/12/14 18:45:42 by gwoodwar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		gcc
FLAGS =		-Wall -Wextra
NAME =		libftprintf.a
LIB_NAME =	libft/libft.a
TMPNAME =	ft_printf
LIB =		-I libft/includes
LFT =		-L libft/ -lft

SRCS =		ft_printf.c \
			get_mod.c \
			read_format.c \
			test_printf.c \
			conversion.c \
			misc.c \
			print_arg.c \
		#	printf_s.c 

OBJS =		$(SRCS:.c=.o)

all:		$(TMPNAME)

libft/libft.a:
	make -C libft/ fclean
	make -C libft/

$(TMPNAME):	$(LIB_NAME) $(OBJS)
	$(CC) $(FLAGS) -o $@ $(OBJS) $(LFT)

# Final MAKEFILE
#
# $(NAME):	$(LIB_NAME) $(OBJS)
#	ar rc $@ $^
#	ranlib $@

%.o:		%.c
	$(CC) $(FLAGS) $(LIB) -o $@ -c $<

clean:
	/bin/rm -f $(OBJS)
	make -C libft/ fclean

fclean: 	clean
	/bin/rm -f $(NAME)

re: 		fclean all
