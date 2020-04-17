/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** counts the size of a string
*/

#include "str.h"

int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return (0);
    while (str[i])
        i += 1;
    return (i);
}
