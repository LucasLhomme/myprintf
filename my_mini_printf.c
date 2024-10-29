/*
** EPITECH PROJECT, 2024
** Mini printF
** File description:
** Premier projet Epitech
*/
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

void checker(char flag, va_list ap)
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
