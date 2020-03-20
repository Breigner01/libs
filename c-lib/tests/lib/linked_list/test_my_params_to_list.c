/*
** EPITECH PROJECT, 2020
** my_params_to_list
** File description:
** tests
*/

#include "tests.h"
#include "linked_list.h"

TestSuite(my_params_to_list, .timeout=0.075);

Test(my_params_to_list, classical_arr)
{
    char *arr[] = {"Epitech", "PoC", "Cycom", "Ephemere", "42"};
    linked_list_t *linked_list = my_params_to_list(5, arr);

    for (int i = 4; i >= 0; i--) {
        cr_assert_str_eq(linked_list->data, arr[i]);
        linked_list = linked_list->next;
    }
}