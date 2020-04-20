/*
** EPITECH PROJECT, 2020
** str lib
** File description:
** header
*/

#ifndef STR_H_
#define STR_H_

/*********************************************************************
** @author Benjamin R.
** @file char_counter.c
**
** @brief counts the number of occurences of a character in a string
**
** @param str: a string
** @param c: the character that has to be counted
**
** @return the number of occurences of c in str
**********************************************************************
*/
int char_counter(char const *str, char c);

/*************************
** @author Benjamin R.
** @file my_revstr.c
**
** @brief reverses str
**
** @param str: a string
**
** @return str reverserd
**************************
*/
char *my_revstr(char *str);

/******************************************************************************
** @author Benjamin R.
** @file my_strcat.c
**
** @brief concatenates 2 strings, dest need to be allocated enough to contain
** dest and src
**
** @param dest: the string that will contain the concatenated string
** @param src: the 2nd string
**
** @return the concatenated string
*******************************************************************************
*/
char *my_strcat(char *dest, char const *src);

/************************************************************
** @author Benjamin R.
** @file my_strcmp.c
**
** @brief compares 2 strings between each other
**
** @param s1: the 1st string
** @param s2: the 2nd string
**
** @return 0 if the strings are the same 1 if s1[i] > s2[i]
** and -1 if s1[i] < s2[i]
*************************************************************
*/
int my_strcmp(char const *s1, char const *s2);

/*****************************************************************************
** @author Benjamin R.
** @file my_strcpy.c
**
** @brief copied the content of src into dest
**
** @param dest: the string receiving the copy of src (it has to be allocated
** of enough bytes)
** @param src: the string to copy
**
** @return dest which contains a copy of src
******************************************************************************
*/
char *my_strcpy(char *dest, char *str);

/***************************************
** @author Benjamin R.
** @file my_strdup.c
**
** @brief duplicates str
**
** @param str: the string to duplicate
**
** @return the duplicated string
****************************************
*/
char *my_strdup(char const *str);

/******************************************
** @author Benjamin R.
** @file my_strlen.c
**
** @brief count the length of str
**
** @param str: a string
**
** @return the length if str
*******************************************
*/
int my_strlen(char const *str);

/*******************************************************
** @author Benjamin R.
** @file my_strlowcase.c
**
** @brief convert uppercase letter to lowercase in str
**
** @param str: a string
**
** @return str in lowercase
********************************************************
*/
char *my_strlowcase(char *str);

/*****************************************************************************
** @author Benjamin R.
** @file my_strncat.c
**
** @brief concatenates n bytes of src in dest
**
** @param dest: the string that will contain the concatenated string (it has
** to be allocted of enough bytes)
** @param src: a string
** @param n: the number of bytes from src to concatenate
**
** @return dest containing the concatenated string
******************************************************************************
*/
char *my_strncat(char *dest, char const *src, int n);

/************************************************************
** @author Benjamin R.
** @file my_strncmp.c
**
** @brief compares n bytes from s1 and s2
**
** @param s1: a string
** @param s2: another string
** @param n: the number of bytes to compare
**
** @return 0 if the strings are the same 1 if s1[i] > s2[i]
** and -1 if s1[i] < s2[i]
*************************************************************
*/
int my_strncmp(char const *s1, char const *s2, int n);

/********************************************************************
** @author Benjamin R.
** @file my_strncpy.c
**
** @brief copies n bytes from src into dest
**
** @param dest: a string that needs to be allocated of enough bytes
** @param src: the string to copy from
** @param n: the number of bytes to copy from src into dest
**
** @return dest with the copied bytes from src
*********************************************************************
*/
char *my_strncpy(char *dest, char const *src, int n);

/******************************************************
** @author Benjamin R.
** @file my_strstr.c
**
** @brief looks for substr into str
**
** @param str: a string
** @param substr: the substring to find in str
**
** @return a pointer to the begining of substr in str
*******************************************************
*/
char *my_strstr(char *str, char const *substr);

/************************************************************
** @author Benjamin R.
** @file my_strupcase.c
**
** @brief convert lowercase letter to uppercase in str
**
** @param str: a string
**
** @return str in uppercase
*************************************************************
*/
char *my_strupcase(char *str);

#endif /* !STR_H_ */