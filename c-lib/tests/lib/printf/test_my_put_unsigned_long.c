/*
** EPITECH PROJECT, 2020
** my_put_unsigned_long
** File description:
** tests
*/

#include "tests.h"
#include "printf.h"

TestSuite(my_put_unsigned_long, .init=redirect_all_stdout, .timeout=0.075);

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