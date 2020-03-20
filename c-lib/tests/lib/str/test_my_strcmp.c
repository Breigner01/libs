/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** tests
*/

#include "tests.h"
#include "str.h"

TestSuite(my_strcmp, .timeout=0.05);

Test(my_strcmp, identical_strings)
{
    char str[] = "Hello";
    char string[] = "Hello";

    cr_assert_eq(my_strcmp(str, string), 0);
}

Test(my_strcmp, strings_without_the_same_length)
{
    char str[] = "Hello";
    char string[] = "Hello World";

    cr_assert_eq(my_strcmp(str, string), -1);
    cr_assert_eq(my_strcmp(string, str), 1);
}

Test(my_strcmp, different_strings_same_length)
{
    char str[] = "coucou";
    char string[] = "abcdef";

    cr_assert_eq(my_strcmp(str, string), 1);
    cr_assert_eq(my_strcmp(string, str), -1);
}