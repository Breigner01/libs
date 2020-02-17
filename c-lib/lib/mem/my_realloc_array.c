/*
** EPITECH PROJECT, 2020
** my_reallos
** File description:
** reallocate the pointer with the size given
*/

#include "mem.h"

char **my_realloc_array(char **ptr, size_t n)
{
    size_t i = 0;
    size_t j = 0;
    char **new_ptr;

    if (!ptr)
        return (NULL);
    for(; ptr[i]; i += 1);
    new_ptr = malloc(sizeof(char *) * (i + n));
    for (; j < i; j += 1)
        new_ptr[j] = ptr[j];
    for (; j < i + n; j += 1)
        new_ptr[j] = NULL;
    return (new_ptr);
}