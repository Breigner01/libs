/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** changes upper case into lower case
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91)
            str[i] += 32;
    }
    return (str);
}
