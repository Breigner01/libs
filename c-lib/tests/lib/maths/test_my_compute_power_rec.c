/*
** EPITECH PROJECT, 2020
** test power function
** File description:
** unit tests
*/

#include "test_my_compute_power_rec.h"

Test(my_compute_power_rec, power_1)
{
    cr_assert_eq(2, my_compute_power_rec(2, 1));
    cr_assert_eq(42, my_compute_power_rec(42, 1));
    cr_assert_eq(169, my_compute_power_rec(169, 1));
    cr_assert_eq(4269, my_compute_power_rec(4269, 1));
}

Test(my_compute_power_rec, power_0)
{
    cr_assert_eq(1, my_compute_power_rec(2, 0));
    cr_assert_eq(1, my_compute_power_rec(42, 0));
    cr_assert_eq(1, my_compute_power_rec(169, 0));
    cr_assert_eq(1, my_compute_power_rec(4269, 0));
}

Test(my_compute_power_rec, power_nb)
{
    cr_assert_eq(16, my_compute_power_rec(2, 4));
    cr_assert_eq(74088, my_compute_power_rec(42, 3));
    cr_assert_eq(169, my_compute_power_rec(13, 2));
    cr_assert_eq(59049, my_compute_power_rec(3, 10));
}

Test(my_compute_power_rec, invalid_power)
{
    cr_assert_eq(0, my_compute_power_rec(2, -10));
    cr_assert_eq(0, my_compute_power_rec(42, -1));
    cr_assert_eq(0, my_compute_power_rec(169, 14));
    cr_assert_eq(0, my_compute_power_rec(4269, 42));
}

Test(my_compute_power_rec, invalid_power_2)
{
    cr_assert_eq(0, my_compute_power_rec(0, -10));
    cr_assert_eq(0, my_compute_power_rec(42, -1));
    cr_assert_eq(0, my_compute_power_rec(169, 14));
    cr_assert_eq(0, my_compute_power_rec(0, 42));
}