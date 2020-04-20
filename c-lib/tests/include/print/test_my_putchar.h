/*
** EPITECH PROJECT, 2020
** print lib
** File description:
** my_putchar header file
*/

#ifndef TEST_MY_PUTCHAR_H_
#define TEST_MY_PUTCHAR_H_

#include "tests.h"
#include "print.h"

TestSuite(my_putchar, .init=redirect_all_stdout, .timeout=0.075);

#endif /* !TEST_MY_PUTCHAR_H_ */