# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 17:06:16 by mlopez-i          #+#    #+#              #
#    Updated: 2024/07/08 17:55:42 by mlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRC_FILES = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

OBJ_DIR = objs/
OBJ_FILES = $(SRC_FILES:.cpp=.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

DEP_FILES = $(SRC_FILES:.cpp=.d)
DEPS = $(addprefix $(OBJ_DIR), $(DEP_FILES))

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -MMD -g -fsanitize=address
RM = rm -f
INCLUDE = -I ./

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $@

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) -r $(OBJ_DIR)
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re