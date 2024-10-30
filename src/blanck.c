/*
** EPITECH PROJECT, 2024
** blanck.c
** File description:
** blanck.c
*/

#include "../include/my.h"
#include <stdio.h>

void blank(va_list list)
{
    char *blanck = list;

    if (my_strlen(blank) == 0 || my_isnum(blank) == 1)
        my_putchar(' ');
    my_putstr(blank);
}
