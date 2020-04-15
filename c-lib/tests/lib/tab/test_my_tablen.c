/*
** EPITECH PROJECT, 2020
** tab lib
** File description:
** my_tablen
*/

#include "tests.h"
#include "tab.h"

TestSuite(my_tablen, .timeout=0.1);

Test(my_tablen, classical_tab)
{
    char *tab[] = {"dsfqf", "dfsqdgqé", "uijhdaziueé", "zopaurr", "sdoigjz)",
    "Epitech", "Allo", "klqsjgfkl", "qodspjfz", "poijdgf", "dsqpojf", NULL};

    cr_assert_eq(my_tablen(tab), 11);
}

Test(my_tablen, null_tab)
{
    cr_assert_eq(my_tablen(NULL), 0);
}