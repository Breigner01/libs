/*
** EPITECH PROJECT, 2020
** lib tab*
** File description:
** fill tab from str with each line beaing an str
*/

#include "tests.h"
#include "tab.h"

TestSuite(fill_tab, .timeout=0.1);

Test(fill_tab, filled_str)
{
    char str[] = "Hello\nWorld\nEpitech\nHereWeAreNoTurnAway\n";
    char *tab[] = {"Hello\n", "World\n", "Epitech\n", "HereWeAreNoTurnAway\n"};
    char **arr = fill_tab(str);

    for (int i = 0; i < 4; i++)
        cr_assert_str_eq(arr[i], tab[i]);
}

Test(fill_tab, filled_str_without_last_return)
{
    char str[] = "Hello\nWorld\nEpitech\nHereWeAreNoTurnAway";
    char *tab[] = {"Hello\n", "World\n", "Epitech\n", "HereWeAreNoTurnAway\n"};
    char **arr = fill_tab(str);

    for (int i = 0; i < 4; i++)
        cr_assert_str_eq(arr[i], tab[i]);
}

Test(fill_tab, null_str)
{
    cr_assert_null(fill_tab(NULL));
}