# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 11:28:02 by hmaronen          #+#    #+#              #
#    Updated: 2022/02/14 11:28:05 by hmaronen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

#Compilation and flags
CC = gcc
FLAGS = #-Wall -Wextra -Werror
DB_FLAG = -g $(FLAGS)

#Source files
SRC = ./src/main.c ./src/ft_printf.c ./src/handlers.c
	
OBJ = $(SRC:.c=.o)

#Includes
LIBFT_H = -I ./libft/includes
PRINTF_H = -I ./
HEADERS = $(LIBFT_H) $(PRINTF_H)

#Paths
FILE_PATH = ./eval_tests/

#Library
LIB = -L ./libft -lft

#Remove
RM = /bin/rm -f

all: $(NAME)

$(NAME): $(SRC)
	@@make -C ./libft/ $(LIBFT_H) fclean && make -C ./libft/ $(LIBFT_H)
	@@$(CC) $(FLAGS) $(HEADERS) $(SRC) -o $(NAME) $(LIB)

debug:
	@@make -C ./libft/ $(LIBFT_H) fclean && make -C ./libft/ $(LIBFT_H)
	@@$(CC) $(DB_FLAG) $(HEADERS) $(SRC) -o $(NAME) $(LIB)

clean:
	@@$(RM) $(OBJ)
	@@make clean -C ./libft/

fclean: clean
	@@/bin/rm -f $(NAME)
	@@make fclean -C ./libft/

re: fclean all

.PHONY: all clean fclean re
