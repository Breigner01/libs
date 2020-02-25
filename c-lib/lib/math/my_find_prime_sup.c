/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** finds the closest prime number that is higher than the number given
*/

#include "math.h"

int my_find_prime_sup(int nb)
{
    for (int i = nb + 1; i <= (nb * nb); i++)
        if (my_is_prime(i) == 1)
            return (i);
    return (0);
}
