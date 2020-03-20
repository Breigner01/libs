/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** tests
*/

#include "tests.h"
#include "str.h"

TestSuite(my_strncpy, .timeout=0.05);

Test(my_strncpy, copy_whole_str)
{
    char str[] = "Hello";
    char string[7];

    cr_assert_str_eq(my_strncpy(string ,str, 6), str);
}

Test(my_strncpy, copy_part_of_str)
{
    char str[] = "Hello";
    char string[3];

    cr_assert_str_eq(my_strncpy(string ,str, 2), "He");
}

Test(my_strncpy, copy_null_str)
{
    char *str = NULL;
    char *string;

    cr_assert_null(my_strncpy(string ,str, 5));
}