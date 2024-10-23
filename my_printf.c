/*
** EPITECH PROJECT, 2024
** Mini printF
** File description:
** Premier projet Epitech
*/
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

void cheker(char flag, va_list list)
{
    switch (flag) {
    case 's':
        my_putstr(va_arg(list, char *));
        break;
    case 'd':
        my_put_nbr(va_arg(list, int));
        break;
    case 'i':
        my_put_nbr(va_arg(list, int));
        break;
    case 'c':
        my_putchar((char) va_arg(list, int));
        break;
    default:
        my_putchar('%');
        break;
    }
}

int mini_printf(const char *format, ...)
{
    int i = 0;
    va_list list;

    va_start(list, format);
    while (format[i]) {
        if (format[i] == '%') {
            i++;
            cheker(format[i], list);
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(list);
    return 0;
}
