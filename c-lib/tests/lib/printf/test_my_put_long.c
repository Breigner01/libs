/*
** EPITECH PROJECT, 2020
** my_put_long
** File description:
** tests
*/

#include "tests.h"
#include "printf.h"

TestSuite(my_put_long, .init=redirect_all_stdout, .timeout=0.05);

Test(my_put_long, test_with_int)
{
    char *str;

    asprintf(&str, "%ld", 42l);
    my_put_long(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_long, test_with_long)
{
    char *str;

    asprintf(&str, "%ld", 0xFFFFFFFFFFFFFFFF);
    my_put_long(0xFFFFFFFFFFFFFFFF);
    cr_assert_stdout_eq_str(str);
    free(str);
}