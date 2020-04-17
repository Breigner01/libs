/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_calloc
*/

#include "mem.h"

void *my_calloc(int mem, size_t size)
{
    void *ptr = malloc(mem * size);

    if (mem == 0)
        return (ptr);
    return (ptr ? my_memset(ptr, 0, size * mem) : NULL);
}