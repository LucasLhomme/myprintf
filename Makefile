##
## EPITECH PROJECT, 2024
## Makefile Root
## File description:
## MakeFile dans le fichier root
##

pathdir=lib/my

NAME = libmy.a
SRC = my_printf.c

all:
	make $(SRC)
	make -C $(pathdir) 

clean:
	make $(SRC)
	make -C $(pathdir) clean

fclean:
	make $(SRC)
	make -C $(pathdir) fclean

re:
	make $(SRC)
	make -C $(pathdir) re
