/*
** EPITECH PROJECT, 2019
** my_put_unprintable
** File description:
** prints non printable ascii characters
*/

#include <stdint.h>
#include <inttypes.h>

void my_putstr(char *);
void my_putchar(char);
void my_put_octal(uint64_t);

void my_put_unprintable(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 8) {
            my_putstr("\\00");
            my_put_octal(str[i]);
        }
        if (str[i] >= 8 && str[i] < 32) {
            my_putstr("\\0");
            my_put_octal(str[i]);
        }
        if (str[i] >= 127) {
            my_putchar('\\');
            my_put_octal(str[i]);
        }
        i++;
    }
}