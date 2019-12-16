/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** displays the number given as parameter
*/

#include <stdlib.h>
#include <stdio.h>

void my_putchar(char);
void my_putstr(char *);
char *my_revstr(char *);

void disp_numbers(int nb, int sign)
{
    char *nb_str = malloc(sizeof(char) * 11);
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

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        disp_numbers(nb, -1);
    } else if (nb > 0)
        disp_numbers(nb, 1);
    else
        my_putchar('0');
}