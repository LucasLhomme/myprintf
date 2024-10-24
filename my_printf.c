/*
** EPITECH PROJECT, 2024
** my_printf
** File description:
** effectue tout ce que la fonction printf peut faire
*/
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list list;

    va_start(list, format);
    for(;format[i] != '\0'; i++)
	if (format[i] == '%') {
            i++;
            flag_detector(
        } else
            my_putchar(format[i]);
        i++;
    }
    va_end(list);
    return 0;
}

void flag_detector(const char *format, int i, va_list list);
{
    int valeur = 0;
    
    if (format[i] == ' ')
	flag_detector(i+1);
    else{
	valeur = format[i];
        flag_finder(valeur)
    }
}
