/*
** EPITECH PROJECT, 2020
** my_puterr
** File description:
** tests
*/

#include "test_my_puterr.h"

Test(my_puterr, test_1)
{
    char *str;

    asprintf(&str, "That's wrong bro\n");
    my_puterr("That's wrong bro\n");
    cr_assert_stderr_eq_str(str);
    free(str);
}

Test(my_puterr, test_2)
{
    char *str;

    asprintf(&str, "I already told you it's not how you have to do it\n");
    my_puterr("I already told you it's not how you have to do it\n");
    cr_assert_stderr_eq_str(str);
    free(str);
}