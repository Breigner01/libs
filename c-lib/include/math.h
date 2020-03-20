/*
** EPITECH PROJECT, 2020
** math lib
** File description:
** header
*/

#ifndef MATH_H_
#define MATH_H_

#define ATN(c) (c - '0')
#define NTA(n) (n + '0')

#include <inttypes.h>

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
char *nb_to_bin(uint64_t nb);

#endif /* !MATH_H_ */