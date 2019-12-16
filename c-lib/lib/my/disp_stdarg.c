/*
** EPITECH PROJECT, 2019
** my_printf bootstrap
** File description:
** displays arguments given as parameter
*/

#include <stdarg.h>

void my_putchar(char);
void my_putstr(char *);
void my_put_nbr(int);

void disp_stdarg(char *s, ...)
{
    int i = 0;
    va_list arg;

    va_start(arg, s);
    while (s[i] != '\0') {
        if (s[i] == 'c')
            my_putchar((char)va_arg(arg, int));
        if (s[i] == 's')
            my_putstr(va_arg(arg, char *));
        if (s[i] == 'i')
            my_put_nbr(va_arg(arg, int));
        my_putchar('\n');
        i++;
    }
}