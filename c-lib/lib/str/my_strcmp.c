/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compares 2 strings
*/

#include "str.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] && s2[i] && s1[i] == s2[i]; i++);
    if (s1[i] > s2[i])
        return (1);
    else if (s1[i] < s2[i])
        return (-1);
    else
        return (0);
}
