/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** returns the square root of perfect square
*/

int result(int, int, int);

int my_compute_square_root(int nb)
{
    int square;
    int value = 0;

    for (int i = 1; i < 46340; i++) {
        square = i * i;
        value = result(nb, square, i);
        if (value != 0)
            return (value);
    }
    return (0);
}

int result(int nb, int square, int i)
{
    if (square == nb)
        return (i);
    if (square > nb)
        return (-1);
    return (0);
}
