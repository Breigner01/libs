/*
** EPITECH PROJECT, 2020
** nb to bin
** File description:
** tests
*/

#include "test_nb_to_bin.h"

Test(nb_to_bin, test_with_nb)
{
    cr_assert_str_eq(nb_to_bin(42), "101010");
    cr_assert_str_eq(nb_to_bin(69), "1000101");
    cr_assert_str_eq(nb_to_bin(169), "10101001");
    cr_assert_str_eq(nb_to_bin(1024), "10000000000");
}