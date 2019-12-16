/*
** EPITECH PROJECT, 2019
** memset
** File description:
** BISTRO
*/

#include <string.h>
#include <stdlib.h>

int my_strlen(char *);

void my_memset(char *str, int j, size_t k)
{
    for (size_t i = 0; i < k; i++)
        str[i] = j;
}