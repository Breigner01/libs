/*
** EPITECH PROJECT, 2020
** lib
** File description:
** parse a string in multiple strings depending on the parsing character given
*/

#include <stddef.h>
#include <stdlib.h>
#include "mem.h"

char **fill_strtok(char const *str, char **tab, char delim)
{
    int j = 0;
    int k = 0;

    for (int h = 0; str[j] != '\0'; ++h) {
        for (; str[j] == delim; ++j);
        for (k = j; str[k] != delim && str[k]; k++);
        tab[h] = my_calloc(k - j + 2, 1);
        for (k = j; str[j] != delim && str[j]; j++)
            tab[h][j - k] = str[j];
        for (; str[j] == delim; j++);
    }
    return (tab);
}

char **my_str_to_word_array_tok(char const *str, char delim)
{
    int words_nb = 0;
    char **tab;

    for (int i = 0; str[i];) {
        for (; str[i] != delim && str[i]; i++);
        words_nb += 1;
        for (; str[i] == delim; i++);
    }
    tab = my_calloc(words_nb + 2, sizeof(char *));
    tab = fill_strtok(str, tab, delim);
    return (tab);
}