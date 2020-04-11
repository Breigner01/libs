/*
** EPITECH PROJECT, 2019
** lib
** File description:
** transform a buffer into a table
*/

#include <stdlib.h>
#include "tab.h"
#include "mem.h"

char **loop(const char *str, char **tab, int x)
{
    int j = 0;
    int k = 0;

    for (int i = 0; str[i] != '\0'; j++) {
        tab[j] = my_calloc(x + 2, sizeof(char));
        if (!tab[j])
            return (NULL);
        for (k = 0; str[i] != '\n' && str[i] != '\0'; k++) {
            tab[j][k] = str[i];
            i += 1;
        }
        tab[j][k] = '\n';
        if (str[i] == '\n')
            i += 1;
    }
    return (tab);
}

char **fill_tab(const char *str)
{
    int x = count_line_len(str);
    int y = count_line_nb(str);
    char **tab;

    if (!str)
        return (NULL);
    tab = my_calloc(y + 1, sizeof(char *));
    if (!tab)
        return (NULL);
    tab = loop(str, tab, x);
    if (!tab)
        return (NULL);
    return (tab);
}