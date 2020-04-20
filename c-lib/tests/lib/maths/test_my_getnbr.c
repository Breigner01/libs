/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** test
*/

#include "test_my_getnbr.h"

Test(my_getnbr, normal_number)
{
    cr_assert_eq(42, my_getnbr("42"));
    cr_assert_eq(69, my_getnbr("69"));
    cr_assert_eq(256, my_getnbr("256"));
    cr_assert_eq(145278, my_getnbr("145278"));
    cr_assert_eq(0, my_getnbr("0"));
    cr_assert_eq(-2, my_getnbr("-2"));
}

Test(my_getnbr, number_with_useless_0)
{
    cr_assert_eq(42, my_getnbr("0000000000000000000042"));
    cr_assert_eq(169, my_getnbr("0169"));
    cr_assert_eq(69, my_getnbr("000000069"));
    cr_assert_eq(81, my_getnbr("00000000000081"));
    cr_assert_eq(-79, my_getnbr("-0000000000000079"));
}

Test(my_getnbr, number_with_lots_of_signs)
{
    cr_assert_eq(42, my_getnbr("+-+-+-+-+---++-++-+++++-42"));
    cr_assert_eq(69, my_getnbr("----------69"));
    cr_assert_eq(256, my_getnbr("+++++++++++++++++++++++++++256"));
    cr_assert_eq(-27, my_getnbr("--+---+-------+++++++++++-27"));
    cr_assert_eq(-96, my_getnbr("-------96"));
}

Test(my_getnbr, strings_with_number_at_the_beginning)
{
    cr_assert_eq(42, my_getnbr("42lk654jhgfd"));
    cr_assert_eq(69, my_getnbr("69sqd56fhgj"));
    cr_assert_eq(-35, my_getnbr("-35sdfqefgsr75488htn"));
    cr_assert_eq(36, my_getnbr("000000000000036zdsy648r,hutd"));
    cr_assert_eq(-58, my_getnbr("-0000058dfsqge<hsz4qg456sg"));
    cr_assert_eq(8, my_getnbr("-+-+-+--++---0000000008qdsrz<+6ts5g2s14r"));
}

Test(my_getnbr, wrong_strings)
{
    cr_assert_eq(0, my_getnbr("-+-+-+-+sqgheth5qe36g456e7qg"));
    cr_assert_eq(0, my_getnbr("qe,hk,qboientbqoekrg4516445-+--++"));
    cr_assert_eq(0, my_getnbr("_(zeig'(_yç'(51646))"));
    cr_assert_eq(0, my_getnbr("gioe,tcgpoepgoizhg462nhy7,-'-"));
    cr_assert_eq(0, my_getnbr("--+-+-+-+-++-+---+-+-+-"));
    cr_assert_eq(0, my_getnbr("()"));
}

Test(my_getnbr, null_string)
{
    cr_assert_eq(0, my_getnbr(NULL));
}