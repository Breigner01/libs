/*
** EPITECH PROJECT, 2020
** tab lib
** File description:
** header
*/

#ifndef TAB_H_
#define TAB_H_

int count_line_len(const char *str);
int count_line_nb(const char *str);
char **fill_tab(const char *str);
char **my_str_to_word_array(char const *str);
char *my_strtok(char *str, char const *delim);
int my_tablen(char **tab);
char **str_to_arr(char *str, char *delim);

#endif /* !TAB_H_ */