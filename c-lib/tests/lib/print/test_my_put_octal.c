/*
** EPITECH PROJECT, 2020
** my_put_octal
** File description:
** tests
*/

#include "tests.h"
#include "print.h"

TestSuite(my_put_octal, .init=redirect_all_stdout, .timeout=0.075);

Test(my_put_octal, int_octal)
{
    char *str;

    asprintf(&str, "%o", 42);
    my_put_octal(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_octal, long_octal)
{
    char *str;

    asprintf(&str, "%lo", 3256654789);
    my_put_octal(3256654789);
    cr_assert_stdout_eq_str(str);
    free(str);
}