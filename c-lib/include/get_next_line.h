/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** header
*/

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

#ifndef READ_SIZE
#define READ_SIZE (4096)
#endif
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/******************************************
 * \author Benjamin R.
 * \file get_next_line.c
 *
 * \brief reads an entire line from fd
 *
 * \param fd: file descriptor of the file
 *
 * \return the line that has been read
 ******************************************
 */
char *get_next_line(int fd);

#endif
