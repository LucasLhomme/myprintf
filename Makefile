##
## EPITECH PROJECT, 2024
## Makefile Root
## File description:
## MakeFile dans le fichier root
##

pathdir=lib/my

NAME = libmy.a

SRC = my_printf.c\
	conversion_dec_to_octal.c\
	mini_printf.c\
	main.c\

OBJ  	=	 $(SRC:.c=.o)

all:
	gcc -o test $(SRC) -I./include -L./lib -lmy
	make -C $(pathdir)

clean:
	rm -f $(OBJ)
	make -C $(pathdir) clean

fclean:
	rm -f $(NAME)
	make -C $(pathdir) fclean

re:
	fclean all
	make -C $(pathdir) re
