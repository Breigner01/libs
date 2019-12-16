/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swaps two integers
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
