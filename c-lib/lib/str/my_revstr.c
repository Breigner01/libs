/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse the string given
*/

#include "str.h"

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    char c;

    for (int j = 0; j < i; j++) {
        c = str[j];
        str[j] = str[i];
        str[i] = c;
        i -= 1;
    }
    return (str);
}
