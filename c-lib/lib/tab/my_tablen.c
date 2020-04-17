/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** counts the size of a string
*/

#include "tab.h"

int my_tablen(char **tab)
{
    int i = 0;

    if (!tab)
        return (0);
    while (tab[i])
        i += 1;
    return (i);
}