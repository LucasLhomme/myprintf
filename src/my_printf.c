/*
** EPITECH PROJECT, 2024
** my_printf
** File description:
** effectue tout ce que la fonction printf peut faire
*/

#include <stdio.h>
#include <stdarg.h>
#include "../include/my.h"
#include "../include/flags.h"

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list list;

    va_start(list, format);
    for (; format[i] != '\0'; i++){
        if (format[i] == '%') {
            i++;
            flag_detector(format, i, list);
        } else
            my_putchar(format[i]);
    }
    va_end(list);
    return 0;
}

int flag_detector(const char *format, int i, va_list list)
{
    if (format[i] == ' ') {
        my_putchar(' ');
        flag_detector(format, i + 1, list);
    }
    for(int c; flags[c].flag != '\0'; c++) {
        if (flags[c].flag == format[i])
            flags[c].flag_identifier(list); 
    }
    return i;
}
