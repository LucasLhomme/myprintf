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
