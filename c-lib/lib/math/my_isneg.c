/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** tells if number is positiv or negativ
*/

#include "printf.h"

int my_isneg(int n)
{
    if (n >= 0){
        my_putchar('P');
    } else if (n < 0) {
        my_putchar('N');
    }
    return (0);
}
