/*
** EPITECH PROJECT, 2020
** tab lib
** File description:
** str_to_arr
*/

#include "test_str_to_arr.h"

Test(str_to_arr, classical_str)
{
    char str[] = "Test\nEpitech\n42\nCoucou\nWe\nAre\nThe\nChampions\n";
    char *arr[] = {"Test", "Epitech", "42", "Coucou", "We", "Are", "The",
    "Champions", NULL};
    char **tab = str_to_arr(str, "\n");

    for (int i = 0; arr[i] && tab[i]; i++)
        cr_assert_str_eq(arr[i], tab[i]);
}

Test(str_to_arr, str_with_mult_delim)
{
    char str[] = "Test\n\n\nEpitech\n\n42\nCoucou\nWe\nAre\nThe\nChampions\n\n";
    char *arr[] = {"Test", "Epitech", "42", "Coucou", "We", "Are", "The",
    "Champions", NULL};
    char **tab = str_to_arr(str, "\n");

    for (int i = 0; arr[i] && tab[i]; i++)
        cr_assert_str_eq(arr[i], tab[i]);
}

Test(str_to_arr, str_with_diff_delim)
{
    char str[] = "Test Epitech\t42 Coucou We\tAre\tThe\tChampions ";
    char *arr[] = {"Test", "Epitech", "42", "Coucou", "We", "Are", "The",
    "Champions", NULL};
    char **tab = str_to_arr(str, " \t");

    for (int i = 0; arr[i] && tab[i]; i++)
        cr_assert_str_eq(arr[i], tab[i]);
}