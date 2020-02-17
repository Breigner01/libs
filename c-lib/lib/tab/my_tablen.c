/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** counts the size of a string
*/

int my_tablen(char const **tab)
{
    int i = 0;

    while (tab[i])
        i += 1;
    return (i);
}
