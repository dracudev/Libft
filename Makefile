# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antandre <antandre@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 18:16:31 by antandre          #+#    #+#              #
#    Updated: 2024/04/26 18:16:57 by antandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs	#-c crear si no existe; -r insertar files.o; -s indexar la libreria
RM = rm -f	#Variable borrar archivos

CC = gcc	#Compilador
CCFLAGS = -Wall -Wextra -Werror 	#Flags del compilador

NAME = libft.a		#Programa final
SRC = ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c\	#Dependencias
ft_isprint.c ft_toupper.c ft_tolower.c ft_strlcpy.c
OBJ = $(SRC:.c=.o)	#Dependencias convertidas en objetos
INCLUDE = libft.h	#Header con los prototipos de las funciones

BONUSSRC = ft_ft_bonus.c	#Dependencias BONUS

BONUSOBJ = $(BONUSSRC:.c=.o)	#Dependencias BONUS convertidas en objetos

all: $(NAME)	#Reglas que deben cumplirse durante el make

$(NAME): $(OBJ) $(INCLUDE)	#Dependencias .o + libft.h
	$(LIB) $(NAME) $(OBJ)	#Instrucciones (ar rcs libft.a obj1.o obj2.o)

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<	#Instrucciones para compilar archivos .c en .o

clean:
	$(RM) $(OBJ) $(BONUSOBJ)	#make clean --> rm -f *.o

fclean: clean				#make fclean +--> rm -f libft.a
	$(RM) $(NAME)

re: fclean all				#make re ++--> rm -f all

rebonus: fclean bonus
