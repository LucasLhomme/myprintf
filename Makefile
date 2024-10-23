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
	make -C $(pathdir) $(SRC)

clean:
	make -C $(pathdir) $(SRC) clean

fclean:
	make -C $(pathdir) $(SRC) fclean

re:
	make -C $(pathdir) $(SRC) re
