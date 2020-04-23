/*
** EPITECH PROJECT, 2020
** get_next_line
** File description:
** tests
*/

#include "test_get_next_line.h"

Test(get_next_line, read_a_file_line)
{
    char *str = NULL;
    size_t n = 0;
    ssize_t ret = 0;
    int fd = open("tests/lib/str/test_get_next_line.c", O_RDONLY);
    FILE *stream = fopen("tests/lib/str/test_get_next_line.c", "r");

    ret = getline(&str, &n, stream);
    str[ret - 1] = '\0';
    cr_assert_str_eq(get_next_line(fd), str);
    ret = getline(&str, &n, stream);
    str[ret - 1] = '\0';
    cr_assert_str_eq(get_next_line(fd), str);
    ret = getline(&str, &n, stream);
    str[ret - 1] = '\0';
    cr_assert_str_eq(get_next_line(fd), str);
    ret = getline(&str, &n, stream);
    str[ret - 1] = '\0';
    cr_assert_str_eq(get_next_line(fd), str);
    free(str);
    close(fd);
    fclose(stream);
}