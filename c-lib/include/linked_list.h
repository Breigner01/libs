/*
** EPITECH PROJECT, 2020
** linked lists
** File description:
** header
*/

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdlib.h>
#include <stddef.h>

typedef struct linked_list_s {
    void *data;
    struct linked_list_s *next;
} linked_list_t;

int my_list_size(linked_list_t const *begin);
linked_list_t *my_set_list(linked_list_t *l_list, void *data);
void my_rev_list(linked_list_t **begin);

#endif /* !LINKED_LIST_H_ */