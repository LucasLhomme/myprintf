/*
** EPITECH PROJECT, 2024
** Mini printF
** File description:
** Premier projet Epitech
*/
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void cheker(char flag, va_list ap)
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

int mini_printf(const char *format, ...)
{
    int i = 0;
    va_list ap;

    va_start(ap, format);
    while (format[i]) {
        if (format[i] == '%') {
            i++;
            cheker(format[i], ap);
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(ap);
    return 0;
}
