# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 19:11:41 by bhagenlo          #+#    #+#              #
#    Updated: 2022/10/26 15:12:10 by bhagenlo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Werror -Wextra
NAME=libft.a

SRC=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_memcmp.c ft_strnstr.c ft_puthex.c \
	ft_printf.c ft_printh.c ft_printn.c ft_prints.c \
	ft_str.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lst.c ft_stack.c ft_li1.c ft_li2.c \
	ft_limem.c \
	get_next_line.c get_next_line_utils.c
SOBS=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SOBS) 
	ar rcs $@ $^
	@echo "libft ready!"

$(SOBS): libft.h
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(SOBS) $(BOBS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette *.c *.h

.PHONY:	all clean fclean re norm
