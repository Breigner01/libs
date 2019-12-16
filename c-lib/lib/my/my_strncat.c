/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** concatenates n characters of the second string into the first one
*/

int my_strlen(char *);

char *my_strncat(char *dest, char const *src, int n)
{
    int i = my_strlen(dest);
    int j = 0;

    if (n == 0)
        return (dest);
    while (j < n) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
