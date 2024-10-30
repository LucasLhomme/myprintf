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
#endif
