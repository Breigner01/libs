/*
** EPITECH PROJECT, 2019
** printf
** File description:
** tests header
*/

#ifndef TESTS_H_
#define TESTS_H_

#define _GNU_SOURCE
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

/**********************************************************
 * \author Benjamin R.
 * \file redirect_all_stdout.c
 *
 * \brief redirects stdout and stderr for criterion tests
 *
 * \param none
 *
 * \return nothing
 **********************************************************
 */
void redirect_all_stdout(void);

#endif /* !TESTS_H_ */