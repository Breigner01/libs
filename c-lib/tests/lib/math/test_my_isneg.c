/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** test
*/

#include "tests.h"

int my_isneg(int n);
void redirect_isneg_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

TestSuite(my_isneg, .init=redirect_isneg_stdout, .timeout=0.02);

Test(my_isneg, positive_nb)
{
    my_isneg(1452186);
    cr_assert_stdout_eq_str("P");
}

Test(my_isneg, negative_nb)
{
    my_isneg(-42);
    cr_assert_stdout_eq_str("N");
}

Test(my_isneg, zero)
{
    my_isneg(0);
    cr_assert_stdout_eq_str("P");
}