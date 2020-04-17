/*
** EPITECH PROJECT, 2020
** my_realloc
** File description:
** reallocates a ptr
*/

#include <stddef.h>
#include <stdlib.h>
#include "mem.h"

void *my_realloc(void *ptr, size_t nmemb, size_t size)
{
    char *new_ptr;
    char *str = (char *)ptr;

    if (size == 0 && ptr) {
        free(ptr);
        return (NULL);
    }
    new_ptr = my_calloc(nmemb, size);
    if (!new_ptr || nmemb == 0)
        return (NULL);
    if (ptr) {
        for (size_t i = 0; str[i] && i < nmemb; i++)
            new_ptr[i] = str[i];
        free(ptr);
    }
    return (new_ptr);
}