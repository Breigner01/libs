/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** determines if the number given as parameter is a prime
*/

int my_sqrt(int);

int my_is_prime(int nb)
{
    int root;

    if (nb <= 1)
        return (0);
    my_sqrt(nb);
    root = my_sqrt(nb);
    for (int i = 2; i <= root; i++){
        if (nb % i == 0)
            return (0);
    }
    return (1);
}

int my_sqrt(int nb)
{
    int square;

    for (int i = 1; i < 46340; i++){
        square = i * i;
        if (square == nb)
            return (i);
        if (square > nb)
            return (i - 1);
    }
    return (0);
}
