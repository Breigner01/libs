/*
** EPITECH PROJECT, 2020
** tab lib
** File description:
** returns array based on a given str of delim
*/

#include "mem.h"
#include "tab.h"

char **str_to_arr(char *str, char *delim)
{
    char **tab = my_calloc(2, sizeof(char *));
    char *token;
    int i = 0;

    if (!str || !delim || !tab)
        return (NULL);
    token = my_strtok(str, delim);
    if (!token)
        return (NULL);
    while (token) {
        tab[i] = token;
        token = my_strtok(NULL, delim);
        i += 1;
        tab = my_reallocarray(tab, i + 2, sizeof(char *));
        if (!tab)
            return (NULL);
    }
    return (tab);
}