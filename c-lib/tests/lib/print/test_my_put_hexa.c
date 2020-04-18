/*
** EPITECH PROJECT, 2020
** my_put_hexa
** File description:
** tests
*/

#include "tests.h"
#include "print.h"

TestSuite(my_put_hexa, .init=redirect_all_stdout, .timeout=0.075);

Test(my_put_hexa, int_hexa_min)
{
    char *str;

    asprintf(&str, "%x", 42);
    my_put_hexa_min(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_hexa, int_hexa_maj)
{
    char *str;

    asprintf(&str, "%X", 42);
    my_put_hexa_maj(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_hexa, long_hexa_min)
{
    char *str;

    asprintf(&str, "%x", 3654789);
    my_put_hexa_min(3654789);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_hexa, long_hexa_maj)
{
    char *str;

    asprintf(&str, "%X", 3654789);
    my_put_hexa_maj(3654789);
    cr_assert_stdout_eq_str(str);
    free(str);
}