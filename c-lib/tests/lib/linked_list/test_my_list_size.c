/*
** EPITECH PROJECT, 2020
** my_list_size
** File description:
** tests
*/

#include "test_my_list_size.h"

Test(my_list_size, classical_ll)
{
    linked_list_t *linked_list = malloc(sizeof(linked_list_t));
    linked_list_t *start = linked_list;

    for (int i = 0; i < 10; i++) {
        linked_list->next = malloc(sizeof(linked_list_t));
        linked_list = linked_list->next;
    }
    linked_list->next = NULL;
    linked_list = start;
    cr_assert_eq(my_list_size(linked_list), 11);
}