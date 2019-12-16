/*
** EPITECH PROJECT, 2019
** my_printf bootstrap
** File description:
** makes the sum of every number of of the sizes
*/

#include <stdarg.h>

int my_strlen(char *);

int sum_stdarg(int i, int nb, ...)
{
    int res = 0;
    va_list arg;

    va_start(arg, nb);
    if (i == 0) {
        for (int j = 1; j <= nb; j++)
            res += va_arg(arg, int);
    } else if (i == 1) {
        for (int j = 1; j <= nb; j++) {
            res += my_strlen(va_arg(arg, char *));
        }
    }
    va_end(arg);
    return (res);
}