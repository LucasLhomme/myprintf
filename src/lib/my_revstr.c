/*
** EPITECH PROJECT, 2024
** my_revstr.c
** File description:
** Write a function that reverses a string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int lenght = my_strlen(str);
    int n = 0;
    int l = lenght - 1;
    char r;

    while (n < l) {
        r = str[n];
        str[n] = str[l];
        str[l] = r;
        n++;
        l--;
    }
    return str;
}
