/*
** EPITECH PROJECT, 2024
** flag_x
** File description:
** display hexadecimal
*/
#include <unistd.h>
#include <stdarg.h>
#include "../include/my.h"

int flag_x(va_list list)
{
    char *base_letter = "0123456789abcdef";
    int i = (va_arg(list, int));
    int r = 0;
    int t = 0;

    while (i != 0) {
    r = i % 16;
    my_putchar(base_letter[r]);
    i = i / 16;
    }
    return 0;
}
