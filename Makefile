# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinda <efinda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 09:28:49 by efinda            #+#    #+#              #
#    Updated: 2025/05/06 16:38:45 by efinda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME		=	tester

CC			=	cc
FLAG		=	-Wall -Wextra -Werror
RM			=	rm -rf

SRC			=	src/main.c				\
				src/lib/mtx.c			\
				src/utils/utils.c		\

OBJ_DIR		=	obj
OBJ			=	$(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) $(LIBFT) -o $@

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re