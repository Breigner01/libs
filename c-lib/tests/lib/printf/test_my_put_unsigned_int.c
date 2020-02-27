/*
** EPITECH PROJECT, 2020
** my_put_unsigned_int
** File description:
** tests
*/

#include "tests.h"
#include "printf.h"

TestSuite(my_put_unsigned_int, .init=redirect_all_stdout, .timeout=0.05);

Test(my_put_unsigned_int, test_with_int)
{
    char *str;

    asprintf(&str, "%u", 42u);
    my_put_unsigned_int(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_unsigned_int, test_with_max_uint)
{
    char *str;

    asprintf(&str, "%u", 4294967295u);
    my_put_unsigned_int(4294967295);
    cr_assert_stdout_eq_str(str);
    free(str);
}