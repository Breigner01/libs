/*
** EPITECH PROJECT, 2020
** lib tab
** File description:
** count the number of \n (so of line) in an str
*/

#include "test_count_line_nb.h"

Test(count_line_nb, filled_str)
{
    char str[] = "Hello\nWorld\nEpitech\nHereWeAreNoTurnAway\n";

    cr_assert_eq(count_line_nb(str), 4);
}

Test(count_line_nb, filled_str_without_last_return)
{
    char str[] = "Hello\nWorld\nEpitech\nHereWeAreNoTurnAway";

    cr_assert_eq(count_line_nb(str), 4);
}

Test(count_line_nb, null_str)
{
    char *str = NULL;

    cr_assert_eq(count_line_nb(str), 0);
}