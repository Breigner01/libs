/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenates 2 strings
*/

#include <stdio.h>

int my_strlen(char *);

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int j = 0;

    while (src[j] != '\0'){
        dest[j + i] = src[j];
        j++;
    }
    return (dest);
}
