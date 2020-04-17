/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** prints strings character one by one
*/

#include <unistd.h>
#include "str.h"
#include "print.h"

void my_puterr(const char *str)
{
    write(2, str, my_strlen(str));
}