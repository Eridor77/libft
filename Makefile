# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 16:26:26 by rlavallo          #+#    #+#              #
#    Updated: 2015/09/28 16:07:47 by rlavallo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCC = gcc -c -Wall -Wextra -Werror
SRC =	ft_strcmp.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isalpha.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_bzero.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)

all: $(NAME) clean

$(NAME):
	@$(GCC) -c $(SRC) -I includes
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "libft ready"

clean:
	@rm -f $(OBJ)
	@echo "all .o cleaned"
	
fclean: clean
	@rm -f $(NAME)
	@echo "libft.a cleaned"

re: fclean all

norme: 
	@norminette $(SRC) includes/libft.h
