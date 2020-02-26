/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** tests
*/

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

#include "tests.h"
#include "mem.h"

TestSuite(my_swap, .timeout=0.03);

Test(my_swap, swap_int)
{
    int a = 42;
    int b = 69;

    my_swap(&a, &b);
    cr_assert_eq(a, 69);
    cr_assert_eq(b, 42);
}

Test(my_swap, swap_strings)
{
    char *a = "Hello World";
    char *b = "Epitech";

    my_swap(&a, &b);
    cr_assert_eq(a, "Epitech");
    cr_assert_eq(b, "Hello World");
}