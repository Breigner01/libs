/*
** EPITECH PROJECT, 2020
** printf lib
** File description:
** header
*/

#ifndef PRINT_H_
#define PRINT_H_

#include <stdint.h>

enum letter {
    UPPERCASE = 7,
    LOWERCASE = 39
};

/************************************************************************
** @author Benjamin R.
** @file my_printf.c
**
** @brief works like printf function
**
** @param str: a format string (refer to man 3 printf for more details)
** @param va_args: name for the '...' which refers to any variable
** corresponding to the flags given in the same order
**
** @return the number of writen bytes (supposedly)
*************************************************************************
**/
int my_printf(char *str, ...);

/********************************************
** @author Benjamin R.
** @file my_put_binary.c
**
** @brief prints the number given in binary
**
** @param nb: the number to print in binary
**
** @return nothing
*********************************************
**/
void my_put_binary(uint64_t nb);

/*************************************************
** @author Benjamin R.
** @file my_put_hexa.c
**
** @brief prints the number given in hexadecimal
**
** @param nb: the number to print in hexadecimal
** @param letter: either LOWERCASE or UPPERCASE
**
** @return nothing
**************************************************
**/
void my_put_hexa(uint64_t nb, int letter);

/************************************************************************
** @author Benjamin R.
** @file my_put_hexa.c
**
** @brief prints the number given in hexadecimal with lowercase letters
**
** @param nb: the number to print in hexadecimal
**
** @return nothing
*************************************************************************
**/
void my_put_hexa_min(uint64_t nb);

/************************************************************************
** @author Benjamin R.
** @file my_put_hexa.c
**
** @brief prints the number given in hexadecimal with uppercase letters
**
** @param nb: the number to print in hexadecimal
**
** @return nothing
*************************************************************************
**/
void my_put_hexa_maj(uint64_t nb);

/******************************************************************************
** @author Benjamin R.
** @file my_put_hexa.c
**
** @brief prints the address of the given pointer in hexadecimal in lowercase
**
** @param nb: the address of the pointer
**
** @return nothing
*******************************************************************************
**/
void my_put_address(uint64_t nb);

/************************************
** @author Benjamin R.
** @file my_put_long_long.c
**
** @brief prints a long long number
**
** @param nb: the number to print
**
** @return nothing
*************************************
**/
void my_put_long_long(int64_t nb);

/**********************************
** @author Benjamin R.
** @file my_put_long.c
**
** @brief prints a long number
**
** @param nb: the number to print
**
** @return nothing
***********************************
**/
void my_put_long(long nb);

/**********************************
** @author Benjamin R.
** @file my_put_nbr.c
**
** @brief prints an integer
**
** @param nb: the number to print
**
** @return nothing
***********************************
**/
void my_put_nbr(int nb);

/*******************************************
** @author Benjamin R.
** @file my_put_octal.c
**
** @brief prints the number given in octal
**
** @param nb: the number to print in octal
**
** @return nothing
********************************************
**/
void my_put_octal(uint64_t nb);

/**********************************
** @author Benjamin R.
** @file my_put_short.c
**
** @brief prints a short number
**
** @param nb: the number to print
**
** @return nothing
***********************************
**/
void my_put_short(short int nb);

/**********************************************************************
** @author Benjamin R.
** @file my_put_unprintable.c
**
** @brief prints non-printable characters formated like @000 for '@0'
**
** @param str: a string
**
** @return nothing
***********************************************************************
**/
void my_put_unprintable(char *str);

/*************************************
** @author Benjamin R.
** @file my_put_unsigned_int.c
**
** @brief prints an unsigned integer
**
** @param nb: the number to print
**
** @return nothing
**************************************
**/
void my_put_unsigned_int(unsigned int nb);

/*****************************************
** @author Benjamin R.
** @file my_put_unsigned_long.c
**
** @brief prints an unsigned long number
**
** @param nb: the number to print
**
** @return nothing
******************************************
**/
void my_put_unsigned_long(unsigned long nb);

/***********************************
** @author Benjamin R.
** @file my_put_unsigned_short.c
**
** @brief prints an unsigned short
**
** @param nb: the number to print
**
** @return nothing
************************************
**/
void my_put_unsigned_short(unsigned short nb);

/************************************
** @author Benjamin R.
** @file my_putchar.c
**
** @brief prints a character
**
** @param c: the character to print
**
** @return nothing
*************************************
**/
void my_putchar(const char c);

/**********************************************
** @author Benjamin R.
** @file my_puterr.c
**
** @brief prints a string on the error output
**
** @param str: the string to print
**
** @return nothing
***********************************************
**/
void my_puterr(const char *str);

/*********************************************
** @author Benjamin R.
** @file my_puts.c
**
** @brief prints a string followed by a '@n'
**
** @param str: the string to print
**
** @return nothing
**********************************************
**/
void my_puts(char const *str);

/************************************************
** @author Benjamin R.
** @file my_putstr.c
**
** @brief prints a string to the standard input
**
** @param str: the string to print
**
** @return nothing
*************************************************
**/
void my_putstr(const char *str);

#endif /* !PRINT_H_ */