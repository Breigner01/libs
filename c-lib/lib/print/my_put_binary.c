/*
** EPITECH PROJECT, 2019
** my_put_binary
** File description:
** print the number given in binary base
*/

#include <stdlib.h>
#include "print.h"
#include "maths.h"

void my_put_binary(uint64_t nb)
{
    char *bin_nb = nb_to_bin(nb);

    my_putstr(bin_nb);
    free(bin_nb);
}