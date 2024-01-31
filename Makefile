# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcochin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 13:54:33 by mcochin           #+#    #+#              #
#    Updated: 2022/07/21 18:42:17 by mcochin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client

CSRCS = main_client.c \
		ft_atob.c
SSRCS = main_server.c \
		ft_btoa.c \
		ft_btoi.c
COBJS = $(CSRCS:.c=.o)
SOBJS = $(SSRCS:.c=.o)

LIBFT = libft

CC = gcc
CFLAGS = -g -Werror -Wextra -Wall
MLXFLAGS = -Imlx_linux -lXext -lX11 -lm -lz
RM = rm -f
MAKE = make -C

all : $(CLIENT) $(SERVER)

$(CLIENT) : $(COBJS) lib
	@ $(CC) $(CFLAGS) -o $(CLIENT) $(COBJS) $(LIBFT)/libft.a 

$(SERVER) : $(SOBJS) lib
	@ $(CC) $(FLAGS) -o $(SERVER) $(SOBJS) $(LIBFT)/libft.a

lib:
	@ $(MAKE) $(LIBFT)

clean :
	@ $(RM) $(COBJS) $(SOBJS) $(CLIENT).so $(SERVER).so
	@ $(MAKE) $(LIBFT) clean

fclean : clean
	@ $(RM) $(SERVER) $(CLIENT) $(LIBFT)/libft.a
	@ echo DONE

re : fclean $(SERVER) $(CLIENT)

f : fclean

r : re
	@clear

.PHONY: all fclean re clean
