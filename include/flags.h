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
#include "./my.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

void checker(char flag, va_list ap);
int flag_o(int n);

typedef struct flag_s {
    char flag;
    void (*flag_identifier)(va_list list);
} flag_t;

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
    {'%', checker},
    {'\0', NULL},
};
#endif
