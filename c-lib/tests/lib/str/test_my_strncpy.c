/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** tests
*/

#include "test_my_strncpy.h"

Test(my_strncpy, copy_whole_str)
{
    char str[] = "Hello";
    char string[7] = {0};

    cr_assert_str_eq(my_strncpy(string ,str, 6), str);
}

Test(my_strncpy, copy_part_of_str)
{
    char str[] = "Hello";
    char string[3] = {0};

    cr_assert_str_eq(my_strncpy(string ,str, 2), "He");
}

Test(my_strncpy, copy_null_str)
{
    char *str = NULL;
    char string[5] = {0};

    cr_assert_null(my_strncpy(string ,str, 5));
}