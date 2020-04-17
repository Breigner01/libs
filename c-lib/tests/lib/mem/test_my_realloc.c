/*
** EPITECH PROJECT, 2020
** my_realloc_array
** File description:
** test
*/

#include "tests.h"
#include "mem.h"

TestSuite(my_realloc, .timeout=0.075);

Test(my_realloc, str_reallocation)
{
    char *str = malloc(10);
    char string[] = "abcdefghi";

    for (int i = 0; i < 10; i++)
        str[i] = string[i];
    str = my_realloc(str, 42, sizeof(char));
    for (int i = 0; i < 10; i++)
        cr_assert_eq(str[i], string[i]);
    free(str);
}

Test(my_realloc, null_ptr)
{
    char *str = my_calloc(42, 69);

    cr_assert_str_eq(my_realloc(NULL, 42, 69), str);
}

Test(my_realloc, no_size)
{
    void *ptr = malloc(42);

    cr_assert_null(my_realloc(ptr, 0, 42));
    free(ptr);
}

Test(my_realloc, no_nmemb)
{
    void *ptr = malloc(42);

    cr_assert_null(my_realloc(ptr, 42, 0));
}

Test(my_realloc, null_ptr_and_no_size)
{
    cr_assert_not_null(my_realloc(NULL, 42, 0));
}