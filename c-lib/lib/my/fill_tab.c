/*
** EPITECH PROJECT, 2019
** lib
** File description:
** transform a buffer into a table
*/

#include <stdlib.h>

int count_line_len(const char *);
int count_line_nb(const char *);

char **fill_tab(const char *str)
{
    int x = count_line_len(str);
    int y = count_line_nb(str);
    char **tab;
    int j = 0;
    int k = 0;

    tab = malloc(sizeof(char *) * (y + 1));
    for (int i = 0; str[i] != '\0'; ++j) {
        tab[j] = malloc(x + 2);
        for (k = 0; str[i] != '\n' && str[i] != '\0'; ++k) {
            tab[j][k] = str[i];
            i += 1;
        }
        tab[j][k] = '\n';
        tab[j][k + 1] = '\0';
        i += 1;
    }
    tab[j] = NULL;
    return (tab);
}