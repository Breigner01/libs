/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** tells if number is positiv or negativ
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0){
        my_putchar(80);
    } else if (n < 0) {
        my_putchar(78);
    }
    return (0);
}
