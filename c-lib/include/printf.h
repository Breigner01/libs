/*
** EPITECH PROJECT, 2020
** printf lib
** File description:
** header
*/

#ifndef PRINTF_H_
#define PRINTF_H_

#include <stdint.h>

int my_printf(char *str, ...);
void my_put_binary(uint64_t nb);
void my_put_hexa(uint64_t nb, int letter);
void my_put_hexa_min(uint64_t nb);
void my_put_hexa_maj(uint64_t nb);
void my_put_address(uint64_t nb);
void my_put_long_long(long long nb);
void my_put_long(long nb);
void my_put_nbr(int nb);
void my_put_octal(uint64_t nb);
void my_put_short(short int nb);
void my_put_unprintable(char *str);
void my_put_unsigned_int(unsigned int nb);
void my_put_unsigned_long(unsigned long nb);
void my_put_unsigned_short(short unsigned int nb);
void my_putchar(const char c);
void my_puterr(const char *str);
void my_putstr(const char *str);

#endif /* !PRINTF_H_ */