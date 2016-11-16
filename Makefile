#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: cciobanu <cristian-ceban@mail.ru>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/11/16 17:33:21 by cciobanu          #+#    #+#             *#
#*   Updated: 2016/11/16 17:42:59 by cciobanu         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = fillit
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_NAME = main.c \
	 	 check.c \
	 	 cord.c \
	 	 create_list.c \
	 	 create_map.c \
	 	 read.c \
	 	 solve.c \
INC_NAME = fillit.h
SRC_PATH = ./srcs/
INC_PATH = ./includes/
OBJ_PATH = ./obj/
LFT_PATH = ./includes/libft/

