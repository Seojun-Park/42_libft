# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinpark <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 21:22:28 by jinpark           #+#    #+#              #
#    Updated: 2019/02/12 21:08:03 by jinpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=libft.a
OBJDIR=bin
SRCDIR=src
CC=gcc
CFLAGS=-Wall -Wextra -Werror

# Simply expanded list of source files contained in src/
SRC:=$(SRCDIR)/ft_*.c

# Corresponding list of object files contained in bin/
OBJ:=$(shell echo $(SRC) | sed 's/$(SRCDIR)\//$(OBJDIR)\//g' | sed 's/\.c/\.o/g')

# Make all target
all: $(NAME)

# Make library
$(NAME): $(OBJ)
	ar rs $(NAME) $(OBJ)
	ranlib $(NAME)

# Make object files - this runs for each .o that needs creating
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p bin
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean:
	make clean
	rm -f libft.a

re:
	make fclean
	make all
