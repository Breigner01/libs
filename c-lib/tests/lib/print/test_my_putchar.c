/*
** EPITECH PROJECT, 2020
** my_put_unsigned_long
** File description:
** tests
*/

#include "test_my_putchar.h"

Test(my_putchar, test_with_char)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}