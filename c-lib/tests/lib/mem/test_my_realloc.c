/*
** EPITECH PROJECT, 2020
** my_realloc_array
** File description:
** test
*/

#include "tests.h"
#include "mem.h"

TestSuite(my_realloc, .timeout=0.075);

Test(my_realloc, str_reallocation)
{
    char *str = malloc(10);
    char string[] = "abcdefghi";

    for (int i = 0; i < 10; i++)
        str[i] = string[i];
    str = my_realloc(str, 42);
    for (int i = 0; i < 10; i++)
        cr_assert_eq(str[i], string[i]);
}

Test(my_realloc, arr_reallocation)
{
    char **tab = malloc(sizeof(char *) * 5);
    char *tabular[] = {"Cycom", "Hello World", "CS:GO", "Tests", NULL};

    for (int i = 0; tabular[i]; i++)
        tab[i] = tabular[i];
    tab[4] = NULL;
    tab = my_realloc(tab, sizeof(char *) * 21);
    for (int i = 0; i < 4; i++)
        cr_assert_str_eq(tab[i], tabular[i]);
    cr_assert_null(tab[4]);
}