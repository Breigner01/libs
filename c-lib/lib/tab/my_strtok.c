/*
** EPITECH PROJECT, 2020
** tab library my_strtok
** File description:
** returns a str from the given one between the 1st character and a given token
*/

#include <stddef.h>
#include "mem.h"
#include "str.h"
#include "tab.h"

static int look_for_delim(char const *str, char const *delim, int i)
{
    for (int j = 0; delim[j]; j++)
        if (str[i] == delim[j])
            return (i);
    return (0);
}

static int nb_delim(char const *str, char const *delim, const int ptr_offset)
{
    int check = 0;
    int i = 0;

    for (i = ptr_offset; str[i]; i++) {
        check = look_for_delim(str, delim, i);
        if (check == 0)
            return (i - ptr_offset);
    }
    return (i - ptr_offset);
}

static char *retrieve_str(char *str, char const *delim, int *ptr_offset)
{
    char *dest;

    for (int i = 0; str[i]; i++) {
        *ptr_offset = look_for_delim(str, delim, i);
        if (*ptr_offset != 0)
            break;
    }
    if (*ptr_offset == 0) {
        *ptr_offset = my_strlen(str);
        return (str);
    }
    dest = my_calloc(*ptr_offset + 1, sizeof(char));
    if (!dest)
        return (NULL);
    for (int i = 0; i < *ptr_offset; i++)
        dest[i] = str[i];
    return (dest);
}

char *my_strtok(char *str, char const *delim)
{
    static char *s = NULL;
    char *dest;
    int ptr_offset = 0;

    if ((!str && !s) || !delim)
        return (NULL);
    if (!str) {
        dest = retrieve_str(s, delim, &ptr_offset);
        if (!dest)
            return (NULL);
        s += ptr_offset + nb_delim(s, delim, ptr_offset);
    } else {
        dest = retrieve_str(str, delim, &ptr_offset);
        if (!dest)
            return (NULL);
        s = str + ptr_offset + nb_delim(str, delim, ptr_offset);
    }
    if (!s[0])
        s = NULL;
    return (dest);
}