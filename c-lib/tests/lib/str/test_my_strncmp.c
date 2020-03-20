/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** tests
*/

#include "tests.h"
#include "str.h"

TestSuite(my_strncmp, .timeout=0.05);

Test(my_strncmp, compare_two_whole_identical_str)
{
    char str[] = "Hello";
    char string[] = "Hello";

    cr_assert_eq(my_strncmp(str, string, 6), 0);
}

Test(my_strncmp, compare_two_whole_non_identical_str)
{
    char str[] = "Hello";
    char string[] = "World!";

    cr_assert_eq(my_strncmp(str, string, 6), -1);
    cr_assert_eq(my_strncmp(string, str, 6), 1);
}

Test(my_strncmp, compare_parts_of_two_identical_str)
{
    char str[] = "Hello";
    char string[] = "Hello";

    cr_assert_eq(my_strncmp(str, string, 3), 0);
}

Test(my_strncmp, compare_parts_of_two_non_identical_str)
{
    char str[] = "Hello";
    char string[] = "World!";

    cr_assert_eq(my_strncmp(str, string, 3), -1);
    cr_assert_eq(my_strncmp(string, str, 3), 1);
}