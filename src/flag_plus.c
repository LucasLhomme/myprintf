/*
** EPITECH PROJECT, 2024
** posi_neg.c
** File description:
** posi_neg.c
*/
#include <stdio.h>
#include "../include/my.h"
#include <stdarg.h>

int flag_plus(va_list list)
{
    int p = list;

    if (p < 0)
        my_putchar('-');
    else
        my_putchar('+');
    return 0;
}
