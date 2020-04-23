/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** return a line from a file descriptor
*/

#include "get_next_line.h"
#include "str.h"
#include "tab.h"

char *get_next_line(int fd)
{
    static char *str = NULL;
    static int prev_fd = -1;
    char buffer[READ_SIZE + 1];
    char *line = NULL;

    if (fd == -1)
        return (NULL);
    if (!str || prev_fd != fd) {
        read(fd, buffer, READ_SIZE);
        buffer[READ_SIZE] = '\0';
        str = buffer;
        prev_fd = fd;
    }
    line = my_strtok(str, "\n");
    str += my_strlen(line) + 1;
    return (line);
}