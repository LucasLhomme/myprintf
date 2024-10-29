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

all: 	$(NAME) clean
$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)
	cp my.h ../../include
	cp libmy.a ../


clean:
	rm -f $(OBJ)
	make -C $(pathdir) clean

fclean:
	rm -f $(NAME)
	make -C $(pathdir) fclean

re:
	fclean all
	make -C $(pathdir) re
