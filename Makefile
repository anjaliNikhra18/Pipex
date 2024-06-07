# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aneekhra <aneekhra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:21:42 by aneekhra          #+#    #+#              #
#    Updated: 2024/04/23 11:11:47 by aneekhra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= pipex

SRCS			=./src/pipex.c \
				./src/util.c \
				./src/utils.c \

HEADER			= ./src/pipex.h

CC				= cc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -f

LIBS			= -L./libft -lft


OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
					@make all -C ./libft
					@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBS)

clean:
				@$(RM) $(OBJS)
					@make fclean -C ./libft

fclean:			clean
					@$(RM) $(NAME) $(OBJS)

re:				fclean all

.PHONY:			all clean fclean re




















