/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** tests
*/

#include "tests.h"
#include "str.h"

TestSuite(my_resvstr, .timeout=0.05);

Test(my_revstr, rev_a_string)
{
    char str[] = "Hello World!";
    cr_assert_str_eq(my_revstr(str), "!dlroW olleH");
}

Test(my_revstr, rev_a_char)
{
    char str[] = "a";
    cr_assert_str_eq(my_revstr(str), "a");
}