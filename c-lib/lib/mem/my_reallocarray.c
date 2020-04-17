/*
** EPITECH PROJECT, 2020
** my_reallos
** File description:
** reallocate the pointer with the size given
*/

#include "mem.h"

void *my_reallocarray(void *ptr, size_t nmemb, size_t size)
{
    char **new_ptr;
    char **arr = (char **)ptr;

    if (size == 0 && ptr) {
        free(ptr);
        return (NULL);
    }
    new_ptr = my_calloc(nmemb, size);
    if (!new_ptr || nmemb == 0)
        return (NULL);
    if (ptr) {
        for (size_t i = 0; arr[i] && i < nmemb; i++)
            new_ptr[i] = arr[i];
        free(ptr);
    }
    return (new_ptr);
}