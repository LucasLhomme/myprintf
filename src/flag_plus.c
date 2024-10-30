/*
** EPITECH PROJECT, 2024
** posi_neg.c
** File description:
** posi_neg.c
*/

#include "../include/my.h"

int flag_plus(int p)
{
    if (p < 0)
        my_putchar('-');
    else
        my_putchar('+');
    return 0;
}
