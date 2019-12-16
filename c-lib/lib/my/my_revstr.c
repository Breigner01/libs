/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse the string given
*/

int my_strlen(char *);

char *my_revstr(char *str)
{
    int i = my_strlen(str);
    int i_s = i - 1;
    char c;

    if (i % 2 == 1)
        i = (i - 1) / 2;
    else
        i /= 2;
    for (int j = 0; j < i; j++) {
        c = str[j];
        str[j] = str[i_s];
        str[i_s] = c;
        i_s--;
    }
    return (str);
}
