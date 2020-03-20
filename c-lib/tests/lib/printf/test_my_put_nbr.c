/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** tests
*/

#include "tests.h"
#include "printf.h"

TestSuite(my_put_nbr, .init=redirect_all_stdout, .timeout=0.075);

Test(my_put_nbr, test_with_nbr)
{
    char *str;

    asprintf(&str, "%d", 42);
    my_put_nbr(42);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_nbr, test_with_neg)
{
    char *str;

    asprintf(&str, "%d", (int)-2147483648);
    my_put_nbr((int)-2147483648);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_nbr, test_with_int_max)
{
    char *str;

    asprintf(&str, "%d", 2147483647);
    my_put_nbr(2147483647);
    cr_assert_stdout_eq_str(str);
    free(str);
}