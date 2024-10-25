/*
** EPITECH PROJECT, 2024
** blank.c
** File description:
** blank.c
*/

#include <stdio.h>


void blank(char *blank)
{
    if (my_strlen(blank) == 0 || my_isnum(blank) == 1)
        my_putchar(' ');
    my_putstr(blank);
}
