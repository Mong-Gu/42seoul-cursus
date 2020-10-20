# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/19 17:55:06 by hyun              #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2020/10/20 23:30:10 by hyun             ###   ########.fr        #
=======
#    Updated: 2020/10/20 00:36:10 by hyun             ###   ########.fr        #
>>>>>>> da9b4df5ed43a9ddc5d723903d122831b0f3e7e9
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_strlen \
		ft_strdup \
		ft_toupper \
		ft_tolower \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_strncmp \
<<<<<<< HEAD
		ft_atoi \
		ft_bzero \
		ft_memset
=======
		ft_atoi
>>>>>>> da9b4df5ed43a9ddc5d723903d122831b0f3e7e9

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all
