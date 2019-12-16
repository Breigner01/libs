/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** IDK
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            k = k * -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            j = j * 10;
            j = j + str[i] - '0';
            i++;
        }
    }
    return (j * k);
}
