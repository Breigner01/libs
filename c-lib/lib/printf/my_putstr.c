/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** prints strings character one by one
*/

#include <unistd.h>
#include "str.h"

void my_putstr(const char *str)
{
    write(1, str, my_strlen(str));
}
