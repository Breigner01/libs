/*
** EPITECH PROJECT, 2019
** strdup
** File description:
** duplicates the string given
*/

#include <stdlib.h>

int my_strlen(char const *);

char *my_strdup(char const *str)
{
    char *strc = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    while (str[i] != '\0') {
        strc[i] = str[i];
        i++;
    }
    strc[i] = '\0';
    return (strc);
}
