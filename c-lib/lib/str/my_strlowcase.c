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
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i += 1;
    }
    return (str);
}
