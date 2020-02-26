/*
** EPITECH PROJECT, 2020
** my_realloc
** File description:
** reallocates a ptr
*/

#include <stddef.h>
#include <stdlib.h>

void *my_realloc(void *ptr, size_t size)
{
    void *new_ptr = malloc(size);

    if (!new_ptr)
        return (NULL);
    for (int i = 0; ((char **)ptr)[i]; i++)
        ((char **)new_ptr)[i] = ((char **)ptr)[i];
    return (new_ptr);
}