/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** changes lower case into upper case
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 96 && str[i] < 123)
            str[i] -= 32;
    }
    return (str);
}
