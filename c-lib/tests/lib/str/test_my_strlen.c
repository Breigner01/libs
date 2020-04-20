/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** tests
*/

#include "test_my_strlen.h"

Test(my_strlen, normal_str)
{
    char str[] = "Hello World!";

    cr_assert_eq(my_strlen(str), 12);
}

Test(my_strlen, empty_str)
{
    char str[] = "";

    cr_assert_eq(my_strlen(str), 0);
}

Test(my_strlen, null_str)
{
    char *str = NULL;

    cr_assert_eq(my_strlen(str), 0);
}