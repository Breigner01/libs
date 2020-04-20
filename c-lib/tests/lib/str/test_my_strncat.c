/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** tests
*/

#include "test_my_strncat.h"

Test(my_strncat, cat_2_entire_str)
{
    char str[] = "Hello ";
    char string[] = "World!";

    cr_assert_str_eq(my_strncat(str, string, 6), "Hello World!");
}

Test(my_strncat, cat_part_of_str)
{
    char str[] = "Hello ";
    char string[] = "World!";

    cr_assert_str_eq(my_strncat(str, string, 2), "Hello Wo");
}

Test(my_strncat, cat_none_of_str)
{
    char str[] = "Hello ";
    char string[] = "World!";

    cr_assert_str_eq(my_strncat(str, string, 0), "Hello ");
}