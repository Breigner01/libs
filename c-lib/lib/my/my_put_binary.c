/*
** EPITECH PROJECT, 2019
** my_put_binary
** File description:
** print the number given in binary base
*/

#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include "my.h"

void my_put_binary(uint64_t nb)
{
    int i = 0;
    int j = 0;
    uint64_t two_pow = 1;
    char *binary_nb;

    for (; (two_pow * 2) <= nb; i++)
        two_pow *= 2;
    binary_nb = malloc(sizeof(char) * (i + 2));
    for (; j <= i; j++) {
        if (nb >= two_pow) {
            nb -= two_pow;
            binary_nb[j] = '1';
        } else
            binary_nb[j] = '0';
        two_pow /= 2;
    }
    binary_nb[j] = '\0';
    my_putstr(binary_nb);
    free(binary_nb);
}