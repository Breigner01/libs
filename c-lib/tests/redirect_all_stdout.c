/*
** EPITECH PROJECT, 2020
** redirect_all_stdout
** File description:
** tests
*/

#include "tests.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}