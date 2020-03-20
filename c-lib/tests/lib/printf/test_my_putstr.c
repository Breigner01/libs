/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** tests
*/

#include "tests.h"
#include "printf.h"

TestSuite(my_putstr, .init=redirect_all_stdout, .timeout=0.075);

Test(my_putstr, test_1)
{
    char *str;

    asprintf(&str, "That's good bro\n");
    my_putstr("That's good bro\n");
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_putstr, test_2)
{
    char *str;

    asprintf(&str, "Very good you're on the good way\n");
    my_putstr("Very good you're on the good way\n");
    cr_assert_stdout_eq_str(str);
    free(str);
}