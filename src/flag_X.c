/*
** EPITECH PROJECT, 2024
** flag_X
** File description:
** flag_X
*/

#include <unistd.h>
#include <stdarg.h>
#include "../include/my.h"

int flag_X(int pointer)
{
    char *base = "0123456789abcdef";
    int i = pointer;
    int r = 0;
    int t = 0;

    while (i != 0) {
      r = i % 16;
      my_putchar(base[r]);
      i = i /16;
      }
    return 0;
}
