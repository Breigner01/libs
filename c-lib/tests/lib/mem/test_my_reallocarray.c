/*
** EPITECH PROJECT, 2020
** my_reallocarray
** File description:
** test
*/

#include "tests.h"
#include "mem.h"

TestSuite(my_reallocarray, .timeout=0.05);

Test(my_reallocarray, classical_reallocation)
{
    char **tab = malloc(sizeof(char *) * 5);
    char *tabular[] = {"Cycom", "Hello World", "CS:GO", "Tests", NULL};

    for (int i = 0; tabular[i]; i++)
        tab[i] = tabular[i];
    tab[4] = NULL;
    tab = my_reallocarray(tab, 21);
    for (int i = 0; i < 4; i++)
        cr_assert_str_eq(tab[i], tabular[i]);
    cr_assert_null(tab[4]);
}