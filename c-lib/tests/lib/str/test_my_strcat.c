/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** tests
*/

#include "test_my_strcat.h"

Test(my_strcat, cat_2_str)
{
    char str[15] = "Hello ";
    char string[] = "World!";
    char *res;

    res = my_strcat(str, string);
    cr_assert_str_eq(res, "Hello World!");
}