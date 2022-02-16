
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 10:42:20 by hmaronen          #+#    #+#              #
#    Updated: 2022/01/10 10:42:22 by hmaronen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

#Compilation and flags
CC = gcc
FLAGS = -Wall -Wextra -Werror
DB_FLAG = -g $(FLAGS)

#Source files
SRC = ./main.c
OBJ = $(SRC:.c=.o)

#Includes
HEADERS = $(FT_PRINTF_H) $(LIBFT_H) $(GNL_H)
LIBFT_H = -I ./libft/includes
FT_PRINTF_H = -I ./

#Paths


#Library
LIB = -L ./libft -lft

#Remove
RM = /bin/rm -f

all: $(NAME)

$(NAME): $(SRC)
	@@make -C ./libft/ $(LIBFT_H) fclean && make -C ./libft/ $(LIBFT_H)
	@@$(CC) $(FLAGS) $(HEADERS) $(SRC) -o $(NAME) $(LIB)

clean:
	@@$(RM) $(OBJ)

fclean: clean
	@@/bin/rm -f $(NAME)

re: fclean all

run:
	@@./a.out
	
debug:
	@@make -C ./libft/ $(LIBFT_H) fclean && make -C ./libft/ $(LIBFT_H)
	@@$(CC) $(DB_FLAG) $(HEADERS) $(SRC) -o $(NAME) $(LIB)
.PHONY: all clean fclean re
