/*
** EPITECH PROJECT, 2019
** memset
** File description:
** BISTRO
*/

#include "mem.h"

void *my_memset(void *ptr, int mem, size_t size)
{
    for (size_t i = 0; i < size; i++)
        ((char *)ptr)[i] = mem;
    return (ptr);
}