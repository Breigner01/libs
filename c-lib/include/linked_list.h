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

/******************************************************
** @author Benjamin R.
** @file my_list_size.c
**
** @brief counts the number of nodes in a linked list
**
** @param begin: the first node of the linked list
**
** @return the number of nodes
*******************************************************
**/
int my_list_size(linked_list_t const *begin);

/*********************************************
** @author Benjamin R.
** @file my_params_to_list.c
**
** @brief creates a node for a linked list
**
** @param l_list: a pointer to the last node
**
** @return a pointer to the new node
**********************************************
**/
linked_list_t *my_set_list(linked_list_t *l_list, void *data);

/**************************************************************
** @author Benjamin R.
** @file my_rev_list.c
**
** @brief reverses a linked list
**
** @param begin: a pointer to the first node of a linked list
**
** @return nothing
***************************************************************
**/
void my_rev_list(linked_list_t **begin);

/***************************************************************
** @author Benjamin R.
** @file my_params_to_list.c
**
** @brief fill a linked list with the content of av of size ac
**
** @param ac: the size of ac
** @param av: the array of elements
**
** @return a linked list filled with the content of av
****************************************************************
**/
linked_list_t *my_params_to_list(int ac, char *const *av);

#endif /* !LINKED_LIST_H_ */