/*
** EPITECH PROJECT, 2020
** mem lib
** File description:
** header
*/

#ifndef MEM_H_
#define MEM_H_

#include <stddef.h>
#include <stdlib.h>

void *my_memset(void *ptr, int mem, size_t size);
void *my_calloc(int mem, size_t size);
void *my_realloc(void *ptr, size_t size);
char **my_reallocarray(char **ptr, size_t n);
void my_swap(int *a, int *b);

#endif /* !MEM_H_ */