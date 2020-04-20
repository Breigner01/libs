/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** tests
*/

#include "test_my_strdup.h"

Test(my_strdup, duplicate_str)
{
    char str[] = "Hello World!";

    cr_assert_str_eq(my_strdup(str), str);
}

Test(my_strdup, duplicate_str_empty)
{
    char str[] = "";

    cr_assert_str_eq(my_strdup(str), str);
}

Test(my_strdup, duplicate_str_null)
{
    char *str = NULL;

    cr_assert_null(my_strdup(str));
}