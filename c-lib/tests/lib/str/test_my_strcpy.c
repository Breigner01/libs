/*
** EPITECH PROJECT, 2020
** strcpy
** File description:
** tests
*/

#include "test_my_strcpy.h"

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
    char string[5];

    cr_assert_null(my_strcpy(string, str));
}