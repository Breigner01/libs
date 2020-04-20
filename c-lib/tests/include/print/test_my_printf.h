/*
** EPITECH PROJECT, 2020
** print lib
** File description:
** test_my_printf header file
*/

#ifndef TEST_MY_PRINTF_H_
#define TEST_MY_PRINTF_H_

#include "tests.h"
#include "print.h"

TestSuite(my_printf, .init=redirect_all_stdout, .timeout=0.075);

#endif /* !TEST_MY_PRINTF_H_ */