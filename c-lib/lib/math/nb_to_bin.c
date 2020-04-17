/*
** EPITECH PROJECT, 2020
** math lib
** File description:
** nb_to_bin
*/

#include <stdlib.h>
#include <inttypes.h>
#include "math.h"

char *nb_to_bin(uint64_t nb)
{
    char *bin_nb;
    uint64_t two_pow = 1;
    int i = 0;
    int j = 0;

    for (; (two_pow * 2) <= nb; i++)
        two_pow *= 2;
    bin_nb = malloc(sizeof(char) * (i + 2));
    for (; j <= i; j++) {
        if (nb >= two_pow) {
            nb -= two_pow;
            bin_nb[j] = '1';
        } else
            bin_nb[j] = '0';
        two_pow /= 2;
    }
    bin_nb[j] = '\0';
    return (bin_nb);
}