/*
** EPITECH PROJECT, 2020
** math lib
** File description:
** header
*/

#ifndef MATHS_H_
#define MATHS_H_

#define ATN(c) (c - '0')
#define NTA(n) (n + '0')

#include <inttypes.h>
#include <stdint.h>

/************************************************
** @author Benjamin R.
** @file my_compute_power_rec.c
**
** @brief compute nb at the power p recursively
**
** @param nb: a number
** @param p: the power
**
** @return nb at power p
*************************************************
**/
int my_compute_power_rec(int nb, int p);

/****************************************************************************
** @author Benjamin R.
** @file my_compute_square_root.c
**
** @brief finds the biggest integer closer to the square root of nb (if the
** square root of nb is an integer this number is the one chosen)
**
** @param nb: a number
**
** @return the square root of nb
*****************************************************************************
**/
int my_compute_square_root(int nb);

/******************************************************
** @author Benjamin R.
** @file my_find_prime_sup.c
**
** @brief finds the smallest prime greater than nb
**
** @param nb: a number
**
** @return returns the smallest prime greater than nb
*******************************************************
**/
int my_find_prime_sup(int nb);

/*****************************************************
** @author Benjamin R.
** @file my_getnbr.c
**
** @brief retrieve the number at the begining of str
**
** @param str: a string possibly containing a number
**
** @return returns the number
******************************************************
**/
int my_getnbr(char const *str);

/*************************************************************************
** @author Benjamin R.
** @file nb_to_bin.c
**
** @brief takes a number and turn it into a string containing the binary
** value
**
** @param nb: the numebr to convert
**
** @return returns the binary number in a string
**************************************************************************
**/
char *nb_to_bin(uint64_t nb);

#endif /* !MATHS_H_ */