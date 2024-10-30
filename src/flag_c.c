#include <stdio.h>
#include <stdarg.h>
#include "../include/my.h"

int flag_c(va_list list)
{
    my_putchar(list);
}