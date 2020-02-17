/*
** EPITECH PROJECT, 2019
** my_rev_list
** File description:
** reverse the order of the arguments in the linked list
*/

#include "linked_list.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *my_list;
    linked_list_t *temporary;
    linked_list_t *to_be_continued;

    my_list = *begin;
    while (my_list->next != NULL) {
        to_be_continued = my_list->next;
        my_list->next = temporary;
        temporary = my_list;
        my_list = to_be_continued;
    }
    my_list->next = temporary;
    *begin = my_list;
}
