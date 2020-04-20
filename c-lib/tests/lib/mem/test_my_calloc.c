/*
** EPITECH PROJECT, 2020
** my_calloc
** File description:
** test
*/

#include "test_my_calloc.h"

Test(my_calloc, test_without_0)
{
    char **tab = calloc(sizeof(char *), 42);
    char **my_tab = my_calloc(sizeof(char *), 42);

    cr_assert_str_eq(my_calloc(sizeof(char), 42), calloc(sizeof(char), 42));
    for (int i = 0; i < 42; i++)
        cr_assert_eq(my_tab[i], tab[i]);
}

Test(my_calloc, test_with_0)
{
    cr_assert_str_eq(my_calloc(0, 42), calloc(0, 42));
    cr_assert_str_eq(calloc(sizeof(char *), 0), my_calloc(sizeof(char *), 0));
    cr_assert_str_eq(calloc(0, 0), my_calloc(0, 0));
}