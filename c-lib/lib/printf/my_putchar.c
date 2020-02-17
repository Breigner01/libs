/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** print one character
*/

#include <unistd.h>

void my_putchar(const char c)
{
    write(1, &c, 1);
}
