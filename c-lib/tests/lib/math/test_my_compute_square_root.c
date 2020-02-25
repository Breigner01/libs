/*
** EPITECH PROJECT, 2020
** test my compute square root
** File description:
** test
*/

#include "tests.h"

int my_compute_square_root(int nb);

TestSuite(my_compute_square_root, .timeout=0.05);

Test(my_compute_square_root, perfect_square)
{
    cr_assert_eq(1, my_compute_square_root(1));
    cr_assert_eq(2, my_compute_square_root(4));
    cr_assert_eq(13, my_compute_square_root(169));
    cr_assert_eq(23, my_compute_square_root(529));
}

Test(my_compute_square_root, not_perfect_square)
{
    cr_assert_eq(-1, my_compute_square_root(63));
    cr_assert_eq(-1, my_compute_square_root(42));
    cr_assert_eq(-1, my_compute_square_root(69));
    cr_assert_eq(-1, my_compute_square_root(13));
}

Test(my_compute_square_root, wrong_value)
{
    cr_assert_eq(-1, my_compute_square_root(0));
    cr_assert_eq(-1, my_compute_square_root(-42));
    cr_assert_eq(-1, my_compute_square_root(-69));
    cr_assert_eq(-1, my_compute_square_root(-169));
    cr_assert_eq(0, my_compute_square_root(2147483647));
}