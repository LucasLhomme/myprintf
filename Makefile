##
## EPITECH PROJECT, 2024
## Makefile Root
## File description:
## MakeFile dans le fichier root
##

pathdir=lib/my

all:
	make -C $(pathdir)

clean:
	make -C $(pathdir) clean

fclean:
	make -C $(pathdir) fclean

re:
	make -C $(pathdir) re
