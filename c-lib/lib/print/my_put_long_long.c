/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** displays the number given as parameter
*/

#include <stdlib.h>
#include "str.h"
#include "print.h"

void disp_long_long(int64_t nb, int sign)
{
    char *nb_str = malloc(sizeof(char) * 20);
    int i = 0;

    while (nb != 0) {
        nb_str[i] = (nb % (10 * sign)) * sign + '0';
        nb /= 10;
        i++;
    }
    nb_str[i] = '\0';
    nb_str = my_revstr(nb_str);
    my_putstr(nb_str);
    free(nb_str);
}

void my_put_long_long(int64_t nb)
{
    if (nb < 0) {
        my_putchar('-');
        disp_long_long(nb, -1);
    } else if (nb > 0)
        disp_long_long(nb, 1);
    else
        my_putchar('0');
}