/*
** EPITECH PROJECT, 2020
** my_put_short
** File description:
** tests
*/

#include "tests.h"
#include "printf.h"

TestSuite(my_put_short, .init=redirect_all_stdout, .timeout=0.05);

Test(my_put_short, test_with_short)
{
    char *str;

    asprintf(&str, "%hd", 42);
    my_put_short(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_short, neg_short)
{
    char *str;

    asprintf(&str, "%hd", -42);
    my_put_short(-42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_short, big_short)
{
    char *str;

    asprintf(&str, "%hd", 32767);
    my_put_short(32767);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_short, big_neg_short)
{
    char *str;

    asprintf(&str, "%hd", -32768);
    my_put_short(-32768);
    cr_assert_stdout_eq_str(str);
    free(str);
}