/*
** EPITECH PROJECT, 2024
** mini printf
** File description:
** mini_printf
*/
#include <stdio.h>
#include <stdarg.h>
#include "../include/my.h"
#include "../include/flags.h"


void checker(char flag, va_list list)
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
