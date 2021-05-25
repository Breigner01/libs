/*
** EPITECH PROJECT, 2019
** my_rev_list
** File description:
** reverse the order of the arguments in the linked list
*/

#include <stdio.h>
#include "linked_list.h"

void my_rev_list(linked_list_t **head)
{
    linked_list_t *linked_list = *head;
    linked_list_t *prev = NULL;
    linked_list_t *next;

    while (linked_list->next) {
        next = linked_list->next;
        linked_list->next = prev;
        prev = linked_list;
        linked_list = next;
    }
    linked_list->next = prev;
    *head = linked_list->next;
    free(linked_list);
}