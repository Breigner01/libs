/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** tests
*/

#include "tests.h"
#include "str.h"

TestSuite(my_strupcase, .timeout=0.1);

Test(my_strupcase, uppercase_str)
{
    char str[] = "HELLO WORLD!";

    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD!");
}

Test(my_strupcase, lowcase_str)
{
    char str[] = "hello world!";

    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD!");
}

Test(my_strupcase, uppercase_alphabet)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cr_assert_str_eq(my_strupcase(str), "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
}

Test(my_strupcase, lowcase_alphabet)
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";

    cr_assert_str_eq(my_strupcase(str), "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
}