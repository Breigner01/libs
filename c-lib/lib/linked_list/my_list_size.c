/*
** EPITECH PROJECT, 2019
** my_list_size
** File description:
** count the number of elements in a list
*/

#include "linked_list.h"

int my_list_size(linked_list_t const *begin)
{
    int i = 0;

    while (begin != NULL) {
        begin = begin->next;
        i++;
    }
    return (i);
}
