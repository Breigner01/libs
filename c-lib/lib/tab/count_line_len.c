/*
** EPITECH PROJECT, 2019
** lib
** File description:
** count the length of a line
*/

int count_line_len(const char *str)
{
    int i = 0;
    int len = 0;
    int tmp = 0;

    while (str[i] != '\0') {
        while (str[i] != '\n') {
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