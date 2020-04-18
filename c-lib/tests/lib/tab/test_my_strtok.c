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
    char *tok_1 = strtok(str, "\n");
    char *tok_2 = my_strtok(str, "\n");

    while (tok_1 && tok_2) {
        cr_assert_str_eq(tok_2, tok_1);
        tok_1 = strtok(NULL, "\n");
        tok_2 = my_strtok(NULL, "\n");
    }
    cr_assert_null(tok_1);
    cr_assert_null(tok_2);
}

Test(my_strtok, string_without_delim)
{
    char str[] = "Hello Coucou Test Epitech";
    char *tok_1 = strtok(str, "\n");
    char *tok_2 = my_strtok(str, "\n");

    cr_assert_str_eq(tok_2, tok_1);
}

Test(my_strtok, string_with_mult_delim)
{
    char str[] = "Hello\n\n\n\nCoucou\n\n\nTest\n\nEpitech\n\n\n\n\n\n\n\n\n";
    char *tok_1 = strtok(str, "\n");
    char *tok_2 = my_strtok(str, "\n");

    while (tok_1 && tok_2) {
        cr_assert_str_eq(tok_2, tok_1);
        tok_1 = strtok(NULL, "\n");
        tok_2 = my_strtok(NULL, "\n");
    }
    cr_assert_null(tok_1);
    cr_assert_null(tok_2);
}

Test(my_strtok, string_with_diff_delim)
{
    char str[] = "Hello Coucou!Test:Epitech";
    char *tok_1 = strtok(str, " !:");
    char *tok_2 = my_strtok(str, " !:");

     while (tok_1 && tok_2) {
        cr_assert_str_eq(tok_2, tok_1);
        tok_1 = strtok(NULL, " !:");
        tok_2 = my_strtok(NULL, " !:");
    }
    cr_assert_null(tok_1);
    cr_assert_null(tok_2);
}

Test(my_strtok, string_with_diff_mult_delim)
{
    char str[] = "Hello ! :! Coucou!  ::!: :!!!Test! :! :! :: Epitech";
    char *tok_1 = strtok(str, " !:");
    char *tok_2 = my_strtok(str, " !:");

     while (tok_1 && tok_2) {
        cr_assert_str_eq(tok_2, tok_1);
        tok_1 = strtok(NULL, " !:");
        tok_2 = my_strtok(NULL, " !:");
    }
    cr_assert_null(tok_1);
    cr_assert_null(tok_2);
}

Test(my_strtok, null_str)
{
    cr_assert_null(my_strtok(NULL, "\n"));
}

Test(my_strtok, null_delim)
{
    cr_assert_null(my_strtok("Hello Coucou Test Epitech", NULL));
}