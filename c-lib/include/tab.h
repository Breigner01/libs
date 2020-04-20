/*
** EPITECH PROJECT, 2020
** tab lib
** File description:
** header
*/

#ifndef TAB_H_
#define TAB_H_

/******************************************
** @author Benjamin R.
** @file count_line_len.c
**
** @brief find the longest line in str
**
** @param str: a string
**
** @return the length of the longest line
*******************************************
**/
int count_line_len(const char *str);

/*******************************************
** @author Benjamin R.
** @file count_line_nb.c
**
** @brief count the number of lines in str
**
** @param str: a string
**
** @return the number of lines in str
********************************************
**/
int count_line_nb(const char *str);

/*******************************************************************************
** @author Benjamin R.
** @file my_strtok.c
**
** @brief breaks the string into a sequence of zero or more nonempty tokens.
** On the first call, the string to be parsed should be specified in str.
** In each subsequent call that should parse the same string, str must be NULL
**
** @param str: the string to be parsed
** @param delim: a string containing the delimiters
**
** @return a pointer to the next token or null if there are no more tokens
********************************************************************************
**/
char *my_strtok(char *str, char const *delim);

/*********************************************************************
** @author Benjamin R.
** @file my_tablen.c
**
** @brief count the number of strings (char *) in an array (char **)
**
** @param tab: an array
**
** @return the number of strings in the given array
**********************************************************************
**/
int my_tablen(char **tab);

/***************************************************************************
** @author Benjamin R.
** @file str_to_arr.c
**
** @brief fill an array with the tokens of a given string delimited by the
** delimiters present in delim. It does call my_strtok
**
** @param str: the string to be split
** @param delim: a string containing the delimiters
**
** @return the array containing the tokens
****************************************************************************
**/
char **str_to_arr(char *str, char *delim);

#endif /* !TAB_H_ */