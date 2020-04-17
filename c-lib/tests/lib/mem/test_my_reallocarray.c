/*
** EPITECH PROJECT, 2020
** my_reallocarray
** File description:
** test
*/

#include "tests.h"
#include "mem.h"

TestSuite(my_reallocarray, .timeout=0.075);

Test(my_reallocarray, classical_reallocation)
{
    char **tab = malloc(sizeof(char *) * 5);
    char *tabular[] = {"Cycom", "Hello World", "CS:GO", "Tests", NULL};

    for (int i = 0; tabular[i]; i++)
        tab[i] = tabular[i];
    tab[4] = NULL;
    tab = my_reallocarray(tab, 21, sizeof(char *));
    for (int i = 0; i < 4; i++)
        cr_assert_str_eq(tab[i], tabular[i]);
    cr_assert_null(tab[4]);
}

Test(my_reallocarray, null_ptr)
{
    char **arr = my_calloc(42, 69);

    cr_assert_str_eq(my_reallocarray(NULL, 42, 69), arr);
}

Test(my_reallocarray, no_size)
{
    void *ptr = malloc(42);

    cr_assert_null(my_reallocarray(ptr, 0, 42));
    free(ptr);
}

Test(my_reallocarray, no_nmemb)
{
    void *ptr = malloc(42);

    cr_assert_null(my_reallocarray(ptr, 42, 0));
}

Test(my_reallocarray, null_ptr_and_no_size)
{
    cr_assert_not_null(my_reallocarray(NULL, 42, 0));
}