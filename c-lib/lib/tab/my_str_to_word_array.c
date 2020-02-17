/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_str_to_word_array
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char **fill_with_words(char const *str, char **tab)
{
    int j = 0;
    int k = 0;

    for (int h = 0; str[j] != '\0' && str[j] != '\n'; ++h) {
        for (; str[j] == ' ' || str[j] == '\t' || str[j] == '\n'; ++j);
        for (k = j; (str[k] != ' ' || str[k] != '\t') && str[k] != '\0'; ++k);
        tab[h] = malloc(k - j + 1);
        tab[h + 1] = NULL;
        for (k = j; (str[j] != ' ' && str[j] != '\t') && str[j] != '\0'; ++j)
            tab[h][j - k] = str[j];
        tab[h][j - k] = '\0';
        for (; str[j] == ' ' || str[j] == '\t' || str[j] == '\n'; ++j);
    }
    return (tab);
}

char **my_str_to_word_array(char const *str)
{
    int words_nb = 0;
    char **tab;

    for (int i = 0; str[i] != '\0' && str[i] != '\n';) {
        for (; (str[i] != ' ' && str[i] != '\t') && str[i] != '\0'; ++i);
        words_nb += 1;
        for (; str[i] == ' ' || str[i] == '\t'; ++i);
    }
    tab = malloc(sizeof(char *) * (words_nb + 1));
    tab = fill_with_words(str, tab);
    return (tab);
}