/*
** EPITECH PROJECT, 2020
** get_next_line
** File description:
** tests
*/

#include <fcntl.h>
#include <stdio.h>
#include "tests.h"
#include "get_next_line.h"
#include "str.h"

TestSuite(get_next_line, .timeout=0.1);
/*
Test(get_next_line, read_a_file_line)
{
    char *str = NULL;
    size_t n = 0;
    int fd = open("tests/lib/str/test_get_next_line.c", O_RDONLY);
    FILE *stream = fopen("tests/lib/str/test_get_next_line.c", "r");

    getline(&str, &n, stream);
    cr_assert_str_eq(get_next_line(fd), str);
    getline(&str, &n, stream);
    cr_assert_str_eq(get_next_line(fd), str);
    getline(&str, &n, stream);
    cr_assert_str_eq(get_next_line(fd), str);
    getline(&str, &n, stream);
    cr_assert_str_eq(get_next_line(fd), str);
    free(str);
    close(fd);
    fclose(stream);
}*/