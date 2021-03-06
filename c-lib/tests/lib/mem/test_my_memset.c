/*
** EPITECH PROJECT, 2020
** my_memset
** File description:
** test
*/

#include "test_my_memset.h"

Test(my_memset, fill_array_with_0)
{
    char *str = malloc(10);
    char *my_str = malloc(10);

    my_str = my_memset(my_str, 0, 10);
    str = memset(str, 0, 10);
    cr_assert_str_eq(my_str, str);
    free(my_str);
    free(str);
}