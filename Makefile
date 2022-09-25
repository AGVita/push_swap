# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 14:36:54 by rzarquon          #+#    #+#              #
#    Updated: 2022/06/21 15:35:17 by rzarquon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS		= push_swap.c source/push.c source/rr.c source/rrr.c \
		source/ss.c source/utils.c source/utils2.c source/utils5.c \
		source/utils4.c source/utils3.c source/minimal_value.c source/big_value.c \

HEADER	= includes/push_swap.h

OBJ		=	$(patsubst %.c, %.o, $(SRCS))

CC		= CC

FLAGS	= -Wall -Wextra -Werror

Y = "\033[33m"
X = "\033[0m"
G = "\033[32m"

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	@echo $(Y)Compiling [$(NAME)]...$(X)
	@$(CC) -o $(NAME) $(OBJ) $(FLAGS)
	@echo $(G)Finished [$(NAME)]$(X)

%.o	:	%.c $(HEADER)
	@$(CC) $(FLAGS) -c $< -o $@

clean	:
	@echo $(Y)Deleting object files...$(X)
	@rm -f $(OBJ)
	@echo $(G)Files deletion completed...$(X)

fclean	: clean
	@echo $(Y)and deleting [$(NAME)]...$(X)
	@rm -f $(NAME)
	@echo $(G)[$(NAME)]deletion completed...$(X)

re		: fclean all