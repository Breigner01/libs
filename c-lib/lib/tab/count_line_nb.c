/*
** EPITECH PROJECT, 2019
** lib
** File description:
** count the number of lines
*/

#include "tab.h"

int count_line_nb(const char *str)
{
    int j = 0;

    if (!str)
        return (0);
    for (int i = 0; str[i]; ++i)
        if (str[i] == '\n' && str[i + 1])
            j += 1;
    return (j + 1);
}