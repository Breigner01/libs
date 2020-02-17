/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_calloc
*/

#include "mem.h"

void *my_calloc(int mem, size_t size)
{
    void *ptr = malloc(size);

    return (ptr ? my_memset(ptr, mem, size) : NULL);
}