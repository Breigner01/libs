/*
** EPITECH PROJECT, 2020
** my_put_long_long
** File description:
** tests
*/

#include "test_my_put_long_long.h"

Test(my_put_long_long, test_with_int)
{
    char *str;

    asprintf(&str, "%lld", 42ll);
    my_put_long_long(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_long_long, test_with_long)
{
    char *str;

    asprintf(&str, "%lld", 0xFFFFFFFFFFFFFFFFll);
    my_put_long_long(0xFFFFFFFFFFFFFFFFll);
    cr_assert_stdout_eq_str(str);
    free(str);
}