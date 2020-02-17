/*
** EPITECH PROJECT, 2020
** lib
** File description:
** parse a string in multiple strings depending on the parsing character given
*/

#include <stddef.h>
#include <stdlib.h>

char **fill_strtok(char const *str, char **tab, char delim)
{
    int j = 0;
    int k = 0;

    for (int h = 0; str[j] != '\0'; ++h) {
        for (; str[j] == delim; ++j);
        for (k = j; str[k] != delim && str[k] != '\0'; ++k);
        tab[h] = malloc(k - j + 1);
        tab[h + 1] = NULL;
        for (k = j; str[j] != delim && str[j] != '\0'; ++j)
            tab[h][j - k] = str[j];
        tab[h][j - k] = '\0';
        for (; str[j] == delim; ++j);
    }
    return (tab);
}

char **my_strtok(char const *str, char delim)
{
    int words_nb = 0;
    char **tab;

    for (int i = 0; str[i] != '\0' && str[i] != '\n';) {
        for (; str[i] != delim && str[i] != '\0'; ++i);
        words_nb += 1;
        for (; str[i] == delim; ++i);
    }
    tab = malloc(sizeof(char *) * (words_nb + 1));
    tab = fill_strtok(str, tab, delim);
    return (tab);
}