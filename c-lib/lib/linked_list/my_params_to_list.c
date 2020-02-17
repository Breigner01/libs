/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** put params into a list
*/

#include "linked_list.h"

linked_list_t *my_set_list(linked_list_t *l_list, void *data)
{
    linked_list_t *element;

    element = malloc(sizeof(linked_list_t));
    element->data = data;
    element->next = l_list;
    return (element);
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *l_list = NULL;

    for (int i = 0; i < ac; i++)
        l_list = my_set_list(l_list, av[i]);
    return (l_list);
}
