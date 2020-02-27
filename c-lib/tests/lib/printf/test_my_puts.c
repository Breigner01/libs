/*
** EPITECH PROJECT, 2020
** my_puts
** File description:
** tests
*/

#include "tests.h"
#include "printf.h"

TestSuite(my_puts, .init=redirect_all_stdout, .timeout=0.05);

Test(my_puts, test_1)
{
    char *str;

    asprintf(&str, "That's good bro\n");
    my_puts("That's good bro");
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_puts, test_2)
{
    char *str;

    asprintf(&str, "Very good you're on the good way\n");
    my_puts("Very good you're on the good way");
    cr_assert_stdout_eq_str(str);
    free(str);
}