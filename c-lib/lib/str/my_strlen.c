/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** counts the size of a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i += 1;
    return (i);
}
