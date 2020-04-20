/*
** EPITECH PROJECT, 2020
** tab lib
** File description:
** count the len of the longest line
*/

#include "test_count_line_len.h"

Test(count_line_len, filled_str)
{
    char str[] = "Hello\nWorld\nEpitech\nHereWeAreNoTurnAway\n";

    cr_assert_eq(count_line_len(str), 19);
}

Test(count_line_len, null_str)
{
    char *str = NULL;

    cr_assert_eq(count_line_len(str), 0);
}

Test(count_line_len, filled_str_without_last_return)
{
    char str[] = "Hello\nWorld\nEpitech\nHereWeAreNoTurnAway";

    cr_assert_eq(count_line_len(str), 19);
}