/*
** EPITECH PROJECT, 2020
** my_rev_list
** File description:
** tests
*/

#include "tests.h"
#include "linked_list.h"

TestSuite(my_rev_list, .timeout=0.075);
/*
Test(my_rev_list, rev_linked_list)
{
    linked_list_t *linked_list = malloc(sizeof(linked_list_t));
    linked_list_t *start = linked_list;

    for (int i = 0; i < 10; i++) {
        linked_list->data = i * 21;
        printf("%d\n", linked_list->data);
        linked_list->next = malloc(sizeof(linked_list_t));
        linked_list = linked_list->next;
    }
    linked_list->next = NULL;
    linked_list = start;
    my_rev_list(&linked_list);
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", linked_list->data);
        linked_list = linked_list->next;
    }
    for (int i = 9; i >= 0; i--) {
        cr_assert_eq(linked_list->data, i * 21);
        linked_list = linked_list->next;
    }
}*/