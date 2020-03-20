/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** test
*/

#include "tests.h"

int my_is_prime(int nb);

TestSuite(my_is_prime, .timeout=0.075);

Test(my_is_prime, small_prime_nb)
{
    cr_assert_eq(1, my_is_prime(2));
    cr_assert_eq(1, my_is_prime(7));
    cr_assert_eq(1, my_is_prime(11));
    cr_assert_eq(1, my_is_prime(13));
    cr_assert_eq(1, my_is_prime(19));
    cr_assert_eq(1, my_is_prime(41));
}

Test(my_is_prime, small_non_prime_nb)
{
    cr_assert_eq(0, my_is_prime(4));
    cr_assert_eq(0, my_is_prime(6));
    cr_assert_eq(0, my_is_prime(25));
    cr_assert_eq(0, my_is_prime(81));
    cr_assert_eq(0, my_is_prime(121));
    cr_assert_eq(0, my_is_prime(169));
}

Test(my_is_prime, big_prime_nb)
{
    cr_assert_eq(1, my_is_prime(753547));
    cr_assert_eq(1, my_is_prime(907807));
    cr_assert_eq(1, my_is_prime(1106801));
    cr_assert_eq(1, my_is_prime(1427221));
    cr_assert_eq(1, my_is_prime(1606499));
    cr_assert_eq(1, my_is_prime(2108551));
}

Test(my_is_prime, big_non_prime_nb)
{
    cr_assert_eq(0, my_is_prime(753548));
    cr_assert_eq(0, my_is_prime(907808));
    cr_assert_eq(0, my_is_prime(1106802));
    cr_assert_eq(0, my_is_prime(1427222));
    cr_assert_eq(0, my_is_prime(1606500));
    cr_assert_eq(0, my_is_prime(2108552));
}