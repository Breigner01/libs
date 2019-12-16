/*
** EPITECH PROJECT, 2019
** my_put_short
** File description:
** prints a short int
*/

#include <stdlib.h>

void my_putstr(const char *);
char *my_revstr(char *);

void my_put_unsigned_short(short unsigned int nb)
{
    char *nb_str = malloc(sizeof(char) * 6);
    int i = 0;

    while (nb != 0) {
        nb_str[i] = nb % 10 + '0';
        nb /= 10;
        i++;
    }
    nb_str[i] = '\0';
    nb_str = my_revstr(nb_str);
    my_putstr(nb_str);
    free(nb_str);
}