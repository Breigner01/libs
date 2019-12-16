/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** act like printf
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include "my.h"

void short_flags(char **tab, int *i, va_list arg)
{
    int j = 0;
    void (*sfun_ptr[])() = {my_put_short, my_put_short, my_put_octal,
    my_put_unsigned_short, my_put_hexa_min, my_put_hexa_maj, my_putchar};

    (*i)++;
    while (tab[0][*i] != tab[2][j] && tab[2][j] != '\0')
        j++;
    if (tab[2][j] == '\0')
        my_put_short(va_arg(arg, long));
    else {
        sfun_ptr[j](va_arg(arg, void *));
        (*i)++;
    }
}

void long_flags(char **tab, int *i, va_list arg)
{
    int j = 0;
    void (*lfun_ptr[])() = {my_put_long, my_put_long, my_put_octal,
    my_put_unsigned_long, my_put_hexa_min, my_put_hexa_maj, my_put_long_long};

    (*i)++;
    while (tab[0][*i] != tab[2][j] && tab[2][j] != '\0')
        j++;
    if (tab[2][j] == '\0')
        my_put_long(va_arg(arg, long));
    else {
        lfun_ptr[j](va_arg(arg, void *));
        (*i)++;
    }
}

int parser(char **tab, void (*fun_ptr[])(), int (*j)[], va_list arg)
{
    switch (tab[1][(*j)[1]]) {
    case '\0':
        return (-1);
    case '%':
        my_putchar(tab[0][(*j)[0]]);
        return ((*j)[0]);
    case 'l':
        long_flags(tab, &(*j)[0], arg);
        return ((*j)[0]);
    case 'h':
        short_flags(tab, &(*j)[0], arg);
        return ((*j)[0]);
    case 'm':
        my_putstr(strerror(errno));
        return ((*j)[0] + 1);
    default:
        fun_ptr[(*j)[1]](va_arg(arg, void *));
        return ((*j)[0] + 1);
    }
    return (0);
}

void flag_correspondance(char **tab, void (*fun_ptr[])(), int *i, va_list arg)
{
    int j[2] = {*i, 0};

    while (tab[0][*i] != tab[1][j[1]] && tab[1][j[1]] != '\0')
        j[1]++;
    (*i) = parser(tab, fun_ptr, &j, arg);
}

int my_printf(char *str, ...)
{
    char *tab[4] = {str, "diouxXsplqbShm%", "diouxXl", "diouxXh"};
    void (*fun_ptr[])() = {my_put_nbr, my_put_nbr, my_put_octal,
    my_put_unsigned_int, my_put_hexa_min, my_put_hexa_maj, my_putstr,
    my_put_address, long_flags, my_put_long_long, my_put_binary,
    my_put_unprintable};
    va_list arg;

    va_start(arg, str);
    for (int i = 0; str[i] != '\0';) {
        if (str[i] == '%') {
            i++;
            flag_correspondance(tab, fun_ptr, &i, arg);
        } else {
            my_putchar(str[i]);
            i++;
        }
        if (i == -1)
            return (-1);
    }
    va_end(arg);
}