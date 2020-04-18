/*
** EPITECH PROJECT, 2020
** my_put_binary
** File description:
** tests
*/

#include "tests.h"
#include "print.h"

TestSuite(my_put_binary, .init=redirect_all_stdout, .timeout=0.075);

Test(my_put_binary, test_with_int)
{
    char *str;

    asprintf(&str, "101010");
    my_put_binary(42);
    cr_assert_stdout_eq_str(str);
}

Test(my_put_binary, test_with_long)
{
    char *str;

    asprintf(&str, "1101111100010010000101");
    my_put_binary(3654789);
    cr_assert_stdout_eq_str(str);
}