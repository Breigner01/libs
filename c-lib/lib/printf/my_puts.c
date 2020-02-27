/*
** EPITECH PROJECT, 2020
** printf
** File description:
** puts
*/

#include "printf.h"

void my_puts(char const *str)
{
    my_putstr(str);
    my_putchar('\n');
}