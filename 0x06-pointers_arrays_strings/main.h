#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
void print_array(int *a, int n);
void reverse_array(int *a, int n);
char *cap_string(char *s);
char *leet(char *);
#endif /* MAIN_H */
