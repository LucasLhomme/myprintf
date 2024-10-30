/*
** EPITECH PROJECT, 2024
** flag_s
** File description:
** display string
*/

#include <stdio.h>
#include <stdarg.h>
#include "../include/my.h"

int flag_s(va_list list)
{
    char *str = list;
    my_putstr(str);
    return 0;
}
