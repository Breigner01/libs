/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copies a string into another
*/

#include <stddef.h>
#include "str.h"

char *my_strcpy(char *dest, char *str)
{
    int i = 0;

    if (!str)
        return (NULL);
    else if (str[0] == '\0')
        return ("\0");
    for (; str[i]; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return (dest);
}