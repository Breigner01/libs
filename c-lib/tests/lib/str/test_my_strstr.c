/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** tests
*/

#include "test_my_strstr.h"

Test(my_strstr, test_with_string_inside)
{
    cr_assert_str_eq(my_strstr("bite Hello World penis", "Hello World"),
    "Hello World penis");
    cr_assert_str_eq(my_strstr("alloasok", "lo"), "loasok");
}

Test(my_strstr, test_with_string_not_inside)
{
    cr_assert_null(my_strstr("bite Hello World penis", "Hell World"));
    cr_assert_null(my_strstr("alloasok", "lo0"));
}

Test(my_strstr, test_with_null)
{
    cr_assert_null(my_strstr(NULL, "Hello"));
    cr_assert_null(my_strstr("Hello", NULL));
}