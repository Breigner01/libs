/*
** EPITECH PROJECT, 2020
** my_strtok
** File description:
** test
*/

#include "tests.h"
#include "tab.h"

TestSuite(my_strtok, .timeout=0.1);

Test(my_strtok, classical_string)
{
    char str[] = "Hello\nCoucou\nTest\nEpitech\n";
    char *str_1 = strtok(str, "\n");
    char *str_2 = my_strtok(str, "\n");

    while (str_1 && str_2) {
        cr_assert_str_eq(str_2, str_1);
        str_1 = strtok(NULL, "\n");
        str_2 = my_strtok(NULL, "\n");
    }
    cr_assert_null(str_1);
    cr_assert_null(str_2);
}

Test(my_strtok, string_without_delim)
{
    char str[] = "Hello Coucou Test Epitech";
    char *str_1 = strtok(str, "\n");
    char *str_2 = my_strtok(str, "\n");

    cr_assert_str_eq(str_2, str_1);
}