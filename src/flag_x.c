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
    char *base = "0123456789abcdef";
    int i = (va_arg(list, int));
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
    return 0;
}
