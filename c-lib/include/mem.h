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

/**************************************************************************
** @author Benjamin R.
** @file my_calloc.c
**
** @brief allocates a pointer of nmemb blocks of size bytes each and sets
** each nmemb element to 0.
**
** @param nmemb: number of blocks to allocate
** @param size: size of each block
**
** @return the allocated pointer
***************************************************************************
*/
void *my_calloc(int nmemb, size_t size);

/******************************************************************************
** @author Benjamin R.
** @file my_memset.c
**
** @brief this function fills the first n bytes of the memory pointed to by s
** with the constant byte c.
**
** @param s: pointer to fill
** @param c: the constant byte to fill with
** @param n: the number of bytes to fill
**
** @return the pointer s once filled
*******************************************************************************
*/
void *my_memset(void *s, int c, size_t n);

/******************************************************************************
** @author Benjamin R.
** @file my_realloc.c
**
** @brief reallocates the given pointer to the nmemb elements of size bytes
** each, the content of ptr is left unchanged up to the minimum between the
** initial size of ptr and the reallocated size. It has to be a small pointer
** and not an array.
**
** @param ptr: the pointer to reallocate
** @param nmemb: the number of elements to allocate
** @param size: the size of each element to allocate
**
** @return the reallocated pointer
*******************************************************************************
*/
void *my_realloc(void *ptr, size_t nmemb, size_t size);

/******************************************************************************
** @author Benjamin R.
** @file my_reallocarray.c
**
** @brief reallocates the given pointer to the nmemb elements of size bytes
** each, the content of ptr is left unchanged up to the minimum between the
** initial size of ptr and the reallocated size. It has to be an array rather
** than a smaller pointer.
**
** @param ptr: the pointer to reallocate
** @param nmemb: the number of elements to allocate
** @param size: the size of each element to allocate
**
** @return the reallocated pointer
*******************************************************************************
*/
void *my_reallocarray(void *ptr, size_t nmemb, size_t size);

/******************************************************************************
** @author Benjamin R.
** @file my_swap.c
**
** @brief swaps the values of 2 integers
**
** @param a: a pointer to an integer
** @param b: a pointer to another integer
**
** @return nothing
*******************************************************************************
*/
void my_swap(int *a, int *b);

#endif /* !MEM_H_ */