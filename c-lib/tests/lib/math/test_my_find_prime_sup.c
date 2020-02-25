/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** test
*/

#include "tests.h"

int my_find_prime_sup(int nb);

TestSuite(my_find_prime_sup, .timeout=0.05);

Test(my_find_prime_sup, prime_test)
{
    cr_assert_eq(17, my_find_prime_sup(13));
    cr_assert_eq(71, my_find_prime_sup(69));
    cr_assert_eq(19, my_find_prime_sup(17));
    cr_assert_eq(2, my_find_prime_sup(-10));
}