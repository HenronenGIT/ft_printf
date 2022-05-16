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

NAME = a.out

#Compilation and flags
CC = gcc
FLAGS = #-Wall -Wextra -Werror
DB_FLAG = -g $(FLAGS)

#Source files
SRC = *.c
	
OBJ = $(SRC:.c=.o)

#Includes
LIBFT_H = -I ../libft/includes
HEADERS = $(LIBFT_H)

#Paths
FILE_PATH = ./eval_tests/

#Library
LIB = -L ../libft -lft

#Remove
RM = /bin/rm -f

all: $(NAME)

$(NAME): $(SRC)
	@@$(CC) $(FLAGS) $(HEADERS) $(SRC) -o $(NAME) $(LIB)

clean:
	@@$(RM) $(OBJ)

fclean: clean
	@@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
