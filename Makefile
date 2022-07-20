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

CC = gcc
FLAGS = #-Wall -Wextra -Werror
DB_FLAG = -g $(FLAGS)

SRC = $(addprefix ./src/, ft_printf.c handlers.c handlers_2.c tools.c \
	length_modifiers.c flags.c padding.c handle_float.c) 
	
OBJ = ft_printf.o handlers.o handlers_2.o tools.o length_modifiers.o flags.o \
	padding.o handle_float.o

LIBFT_H = -I ./libft/includes
PRINTF_H = -I ./
HEADERS = $(LIBFT_H) $(PRINTF_H)

FILE_PATH = ./eval_tests/

LIB = -L ./libft -lft

RM = /bin/rm -f

all: $(NAME)

$(NAME): $(SRC)
	$(info Compiling libft)
	@make -C ./libft/ $(LIBFT_H) fclean && make -C ./libft/ $(LIBFT_H)
	$(info Creating object files)
	@$(CC) $(FLAGS) -I ./ -c $(SRC)
	$(info Compiling ft_printf library)
#	@ar rc -s $(NAME) *.o ./libft/*.o
	@ar rc -s $(NAME) $(OBJ) ./libft/*.o

clean:
	$(info Cleaning object files)
	@$(RM) $(OBJ)
	@make clean -C ./libft/

fclean: clean
	$(info Cleaning ft_printf library)
	@/bin/rm -f $(NAME)
	@make fclean -C ./libft/

re: fclean all

test: $(SRC)
	@$(CC) $(FLAGS) $(NAME) ./eval_tests/main.c $(PRINTF_H) -D "ORIGINAL"
	@./a.out
	@$(CC) $(FLAGS) $(NAME) ./eval_tests/main.c $(PRINTF_H)
	@./a.out

sanitize: fclean
	@make -C ./libft/ $(LIBFT_H) fclean && make -C ./libft/ $(LIBFT_H) leaks
	@$(CC) -g -fsanitize=address $(FLAGS) -I ./ -c $(SRC)
	@ar rc -s $(NAME) *.o ./libft/*.o
	@$(CC) $(FLAGS) -g -fsanitize=address $(NAME) ./eval_tests/main.c $(PRINTF_H) -D "ORIGINAL"
	@./a.out
	@$(CC) $(FLAGS) -g -fsanitize=address $(NAME) ./eval_tests/main.c $(PRINTF_H)
	@./a.out

.PHONY: all clean fclean re
