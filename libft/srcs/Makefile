# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/19 17:55:06 by hyun              #+#    #+#              #
#    Updated: 2020/12/05 20:07:04 by hyun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_strlen \
		ft_strdup \
		ft_strlcat \
		ft_strlcpy \
		ft_toupper \
		ft_tolower \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_abs \
		ft_strncmp \
		ft_atoi \
		ft_bzero \
		ft_memset \
		ft_atoi \
		ft_calloc \
		ft_memcpy \
		ft_memmove \
		ft_memcmp \
		ft_memchr \
		ft_memccpy \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strrev \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_itoa \
		ft_substr \
		ft_strjoin \
		ft_free_array \
		ft_split \
		ft_strtrim \
		ft_strmapi

BONUS_FILES = ft_lstnew \
				ft_lstsize \
				ft_lstadd_front \
				ft_lstadd_back \
				ft_lstdelone \
				ft_lstclear \
				ft_lstlast \
				ft_lstiter \
				ft_lstmap

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
BONUS_SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
BONUS_OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_FILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
