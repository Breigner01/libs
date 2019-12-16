/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** returns the number at the power both given as parameter with recursive
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    else if (p < 0 || (p > 13 && nb != 0))
        return (0);
    return (nb * my_compute_power_rec(nb, p - 1));
}
