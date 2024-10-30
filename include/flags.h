/*
** EPITECH PROJECT, 2024
** flags.h
** File description:
** repertoire de flags
*/

/*
** EPITECH PROJECT, 2024
** .h
** File description:
** stuct
*/
#include "my.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

void flag_(char flag, va_list ap);
int flag_o(int n);

typedef struct flag_s {
    char flag;
    void (*flag_identifier)(va_list list);
} flag_t;

const flag_t flags[] = {
    {'d', flag_d},
    {'i', flag_i},
    {'o', flag_o},
    {'c', flag_c},
    {'s', flag_s},
    {'%', flag_percent}
};
#endif
