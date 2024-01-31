# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcochin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 15:08:11 by mcochin           #+#    #+#              #
#    Updated: 2022/06/03 17:01:29 by mcochin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_calloc.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_itoa.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_putchar_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_putstr_fd.c \
       ft_split.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_striteri.c \
       ft_strjoin.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strmapi.c \
       ft_strncmp.c \
       ft_strcmp.c \
       ft_strnstr.c \
       ft_strrchr.c \
       ft_strtrim.c \
       ft_substr.c \
       ft_tolower.c \
       ft_toupper.c
SRCSB = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_lstlast.c
SRCSPRINTF = ft_printf/ft_printf.c \
	ft_printf/ft_putadr.c \
	ft_printf/ft_putchar.c \
	ft_printf/ft_puthexnbr.c \
	ft_printf/ft_putnbr.c \
	ft_printf/ft_putstr.c \
	ft_printf/ft_putunsnbr.c
OBJS= $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)
OBJSPRINTF = $(SRCSPRINTF:.c=.o)
CC = gcc
CFLAGS = -Werror -Wextra -Wall
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(OBJSPRINTF)
	ar rcs $(NAME) $(OBJS) $(OBJSPRINTF)

bonus : $(OBJSB)
	ar rcs $(NAME) $(OBJSB)

clean:
	$(RM) $(OBJS) libft.so
	$(RM) $(OBJSB) 
	$(RM) $(OBJSPRINTF)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all fclean clean re bonus
