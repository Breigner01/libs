/*
** EPITECH PROJECT, 2020
** my_put_unsigned_short
** File description:
** tests
*/

#include "test_my_put_unsigned_short.h"

Test(my_put_unsigned_short, test_small_nb)
{
    char *str;

    asprintf(&str, "%hu", 42);
    my_put_unsigned_short(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_unsigned_short, test_with_max_ushort)
{
    char *str;

    asprintf(&str, "%hu", 65535);
    my_put_unsigned_long(65535);
    cr_assert_stdout_eq_str(str);
    free(str);
}