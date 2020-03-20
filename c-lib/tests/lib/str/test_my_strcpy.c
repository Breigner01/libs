/*
** EPITECH PROJECT, 2020
** strcpy
** File description:
** tests
*/

#include "tests.h"
#include "str.h"

TestSuite(my_strcpy, .timeout=0.5);

Test(my_strcpy, copy_str)
{
    char str[] = "Hello World!";
    char string[13];

    cr_assert_str_eq(my_strcpy(string, str), str);
}

Test(my_strcpy, copy_empty_str)
{
    char str[] = "";
    char string[1];

    cr_assert_str_eq(my_strcpy(string, str), str);
}

Test(my_strcpy, copy_null_str)
{
    char *str = NULL;
    char *string;

    cr_assert_null(my_strcpy(string, str));
}