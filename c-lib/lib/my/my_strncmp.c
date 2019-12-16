/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** compares n characters of 2 strings
*/

int checking(char const *s1, char const *s2, int i)
{
    while (s1[i] == s2[i]) {
        if (s2[i] == '\0')
            return (0);
        else
            return (1);
    }
    return (0);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int check = 0;

    for (int i = 0; i < n; i++) {
        check = checking(s1, s2, i);
        if (check == 0)
            return (0);
        if (s1[i] > s2[i])
            return (1);
        else if (s1[i] < s2[i])
            return (-1);
    }
    return (0);
}
