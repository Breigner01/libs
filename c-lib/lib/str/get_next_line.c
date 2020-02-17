/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** return a line
*/

#include "get_next_line.h"
#include "str.h"

char *my_strcat_edit(char *dest, char const *src)
{
    int i = 0;
    char *str = malloc(my_strlen(dest) + my_strlen(src) + 1);

    if (str == NULL)
        return (NULL);
    for (; dest[i] != '\0'; ++i)
        str[i] = dest[i];
    for (int j = 0; src[j] != '\0'; ++j) {
        str[i] = src[j];
        i += 1;
    }
    if (dest[0] != '\0')
        free(dest);
    str[i] = '\0';
    return(str);
}

char *find_end_of_line(char **buffer, char *str, int fd)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            i += 1;
            *buffer += (i % READ_SIZE);
            return (str);
        }
        i += 1;
        if (str[i] == '\0') {
            *buffer -= READ_SIZE;
            read(fd, *buffer, READ_SIZE);
            (*buffer)[READ_SIZE] = '\0';
            str = my_strcat_edit(str, *buffer);
        }
    }
    return(str);
}

char *get_next_line(int fd)
{
    static char *buffer;
    static int prev_fd = -1;
    char *str = "\0\0";
    int check = 0;

    if (fd != prev_fd) {
        buffer = malloc(READ_SIZE + 1);
        if (buffer == NULL)
            return (NULL);
        check = read(fd, buffer, READ_SIZE);
        if (check < 1)
            return (NULL);
        buffer[READ_SIZE] = '\0';
        if (check < 4096)
            return (buffer);
        prev_fd = fd;
    }
    str = my_strcat_edit(str, buffer);
    str = find_end_of_line(&buffer, str, fd);
    return (str);
}