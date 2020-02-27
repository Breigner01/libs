/*
** EPITECH PROJECT, 2020
** my_put_unsigned_long
** File description:
** tests
*/

#include "tests.h"
#include "printf.h"

TestSuite(my_putchar, .init=redirect_all_stdout, .timeout=0.05);

Test(my_putchar, test_with_char)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}