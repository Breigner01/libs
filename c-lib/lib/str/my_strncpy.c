/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** copies n characters of a string
*/

#include <stddef.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    if (!src)
        return (NULL);
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
        if (src[i] == '\0') {
            dest[i] = '\0';
            return (dest);
        }
    }
    return (dest);
}
