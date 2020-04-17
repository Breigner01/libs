/*
** EPITECH PROJECT, 2019
** lib
** File description:
** count the length of the longest line
*/

int count_line_len(const char *str)
{
    int i = 0;
    int len = 0;
    int tmp = 0;

    if (!str)
        return (0);
    while (str[i]) {
        while (str[i] != '\n' && str[i]) {
            tmp += 1;
            i += 1;
        }
        if (tmp > len)
            len = tmp;
        i += 1;
        tmp = 0;
    }
    return (len);
}