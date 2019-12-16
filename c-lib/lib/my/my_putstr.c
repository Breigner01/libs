/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** prints strings character one by one
*/

#include <unistd.h>

void my_putchar(const char c);
int my_strlen(const char *);

void my_putstr(const char *str)
{
    write(1, str, my_strlen(str));
}
