/*
** EPITECH PROJECT, 2020
** print lib
** File description:
** test_my_put_unprintable header file
*/

#ifndef TEST_MY_PUT_UNPRINTABLE_H_
#define TEST_MY_PUT_UNPRINTABLE_H_

#include "tests.h"
#include "print.h"

TestSuite(my_put_unprintable, .init=redirect_all_stdout, .timeout=0.075);

#endif /* !TEST_MY_PUT_UNPRINTABLE_H_ */