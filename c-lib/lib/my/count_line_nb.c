/*
** EPITECH PROJECT, 2019
** lib
** File description:
** count the number of lines
*/

int count_line_nb(const char *str)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] == '\n')
            j += 1;
    return (j);
}