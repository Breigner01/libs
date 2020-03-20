/*
** EPITECH PROJECT, 2019
** strdup
** File description:
** duplicates the string given
*/

#include <stdlib.h>
#include "str.h"
#include "mem.h"

char *my_strdup(char const *str)
{
    char *strc = my_calloc((my_strlen(str) + 1), sizeof(char));
    int i = 0;

    if (!str || !strc)
        return (NULL);
    while (str[i]) {
        strc[i] = str[i];
        i += 1;
    }
    return (strc);
}
