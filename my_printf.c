/*
** EPITECH PROJECT, 2024
** my_printf
** File description:
** effectue tout ce que la fonction printf peut faire
*/
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"
#include "flags.h"

const flag_t flags[] = {
    {'#', NULL},
    {'0', NULL},
    {'-', NULL},
    {'+', NULL},
    {'h', NULL},
    {'l', NULL},
    {'q', NULL},
    {'L', NULL},
    {'j', NULL},
    {'z', NULL},
    {'Z', NULL},
    {'t', NULL},
    {'d', checker},
    {'i', checker},
    {'o', flag_o},
    {'u', NULL},
    {'x', NULL},
    {'X', NULL},
    {'e', NULL},
    {'E', NULL},
    {'f', NULL},
    {'F', NULL},
    {'g', NULL},
    {'a', NULL},
    {'c', checker},
    {'s', checker},
    {'C', NULL},
    {'S', NULL},
    {'p', NULL},
    {'n', NULL},
    {'m', NULL},
    {'%', flag_percent},
    {'\0', NULL},
}

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list list;

    va_start(list, format);
    for (; format[i] != '\0'; i++)
        if (format[i] == '%') {
            i++;
            flag_detector(format, i, list);
        } else
            my_putchar(format[i]);
        i++;
    va_end(list);
    return 0;
}

int flag_detector(const char *format, int i, va_list list)
{   
    if (format[i] == ' ') {
        my_putchar(' ');
        flag_detector (format, i + 1, list);
    }
    for(int c; flags[c].flag != '\0'; c++) {
        if (flags[c].flag == format[i])
            flags[c].flag_identifier(arg_list); 
    }
    return i;
}
