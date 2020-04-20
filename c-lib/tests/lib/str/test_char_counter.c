/*
** EPITECH PROJECT, 2020
** char_counter
** File description:
** tests
*/

#include "test_char_counter.h"

Test(char_counter, char_in_str)
{
    cr_assert_eq(char_counter("abcdefghijklmnopqrstuvwxyz", 'a'), 1);
    cr_assert_eq(char_counter("abcdefghijklmnopqrstuvwxyz", 'z'), 1);
    cr_assert_eq(char_counter("0123456789", '0'), 1);
    cr_assert_eq(char_counter("azerty123", '1'), 1);
    cr_assert_eq(char_counter("moulaga", 'a'), 2);
}

Test(char_counter, char_not_in_str)
{
    cr_assert_eq(char_counter("abcdefghijklmnopqrstuvwxyz", '1'), 0);
    cr_assert_eq(char_counter("abcdefghijklmnopqrstuvwxyz", '_'), 0);
    cr_assert_eq(char_counter("0123456789", 'a'), 0);
    cr_assert_eq(char_counter("azerty123", 'o'), 0);
    cr_assert_eq(char_counter("moulaga", '&'), 0);
}