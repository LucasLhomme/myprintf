/*
** EPITECH PROJECT, 2024
** flag_X
** File description:
** display hexadecimal
*/
#include <unistd.h>
#include <stdarg.h>
#include "../include/my.h"

int flag_x2(va_list list)
{
    char *base = "0123456789ABCDEF";
    int i = va_arg(list, int);
    int r = 0;
    int p = 0;
    char str[32];

    for (; i != 0; p++) {
        r = i % 16;
        str[p] = base[r];
        i = i / 16;
    }
    my_revstr(str);
    str[p + 1] = '\0';
    my_putstr(str);
    return 0;
}
