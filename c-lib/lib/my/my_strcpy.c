/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copies a string into another
*/

char *my_strcpy(char *dest, char *str)
{
    int i = 0;

    if (str[0] != '\0'){
        while (str[i] != '\0') {
            dest[i] = str[i];
            i++;
        }
    } else {
        dest = '\0';
        return (dest);
    }
    dest[i] = '\0';
    return (dest);
}
