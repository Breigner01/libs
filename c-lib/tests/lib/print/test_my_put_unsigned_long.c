/*
** EPITECH PROJECT, 2020
** my_put_unsigned_long
** File description:
** tests
*/

#include "test_my_put_unsigned_long.h"

Test(my_put_unsigned_long, test_with_int)
{
    char *str;

    asprintf(&str, "%lu", 42lu);
    my_put_unsigned_long(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_unsigned_long, test_with_max_ulong)
{
    char *str;

    asprintf(&str, "%lu", 18446744073709551615lu);
    my_put_unsigned_long(18446744073709551615lu);
    cr_assert_stdout_eq_str(str);
    free(str);
}