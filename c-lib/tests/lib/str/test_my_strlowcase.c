/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** tests
*/

#include "tests.h"
#include "str.h"

TestSuite(my_strlowcase, .timeout=0.1);

Test(my_strlowcase, uppercase_str)
{
    char str[] = "HELLO WORLD!";

    cr_assert_str_eq(my_strlowcase(str), "hello world!");
}

Test(my_strlowcase, lowcase_str)
{
    char str[] = "hello world!";

    cr_assert_str_eq(my_strlowcase(str), "hello world!");
}

Test(my_strlowcase, uppercase_alphabet)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cr_assert_str_eq(my_strlowcase(str), "abcdefghijklmnopqrstuvwxyz");
}

Test(my_strlowcase, lowcase_alphabet)
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";

    cr_assert_str_eq(my_strlowcase(str), "abcdefghijklmnopqrstuvwxyz");
}