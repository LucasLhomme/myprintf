/*
** EPITECH PROJECT, 2024
** flag_finder
** File description:
** cherche le flag utilisée dans le printf
*/

int flag_finder(int valeur)
{
    if (valeur < '0')
	my_flag_iscar(valeur);
    if (valeur >= 'A' && valeur <= 'Z')
	my_flag_isupalpha(valeur);
    else
        my_flag_isalpha(valeur);
}

int my_flag_isalpha(int valeur)
{
    switch (flag) {
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'd':
        my_put_nbr(va_arg(ap, int));
        break;
    case 'i':
        my_put_nbr(va_arg(ap, int));
        break;
    case 'c':
        my_putchar((char) va_arg(ap, int));
        break;
    default:
	my_putchar('%');
	break;
    }
}

	
