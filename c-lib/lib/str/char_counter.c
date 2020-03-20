/*
** EPITECH PROJECT, 2020
** str lib
** File description:
** char_counter
*/

int char_counter(char const *str, char c)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            count += 1;
    return (count);
}