/*
** EPITECH PROJECT, 2024
** my_printf
** File description:
** effectue tout ce que la fonction printf peut faire
*/
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"
#include "flag.h"
 
const flag_t flags[] = {
    {'c', flag_c}
    {'#', flag_#}
    {'0',flag_0}
    {'-',flag_-}
    {'+',flag_+}
    {'h',flag_h}
    {'l',flag_l}
    {'q',flag_q}
    {'L',flag_L}
    {'j',flag_j}
    {'z',flag_z}
    {'Z',flag_Z}
    {'t',flag_t}
    {'d',flag_d}
    {'i',flag_i}
    {'o',flag_o}
    {'u',flag_u}
    {'x',flag_x}
    {'X',flag_X}
    {'e',flag_e}
    {'E',flag_E}
    {'f',flag_f}
    {'F',flag_F}
    {'g',flag_G}
    {'a',flag_A}
    {'c',flag_c}
    {'s',flag_s}
    {'C',flag_C}
    {'S',flag_S}
    {'p',flag_p}
    {'n',flag_n}
    {'m',flag_m}
    {'%',flag_%}
    {'\0',NULL}
}

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list list;

    va_start(list, format);
    for(;format[i] != '\0'; i++)
	if (format[i] == '%') {
            i++;
            flag_detector(format, i, list);;
        } else
            my_putchar(format[i]);
        i++;
    va_end(list);
    return 0;
}
int flag_detector(const char *format, int i, va_list list);
{   
    if (format[i] == ' ')
	my_putchar(' ')
	flag_detector(i+1);
    for(int c;flags[c].flag != '\0';c++) {
	if (flags[c].flag == format[i])
	    flags[c].flag_identifier(arg_list)
    }
    return i;
}
