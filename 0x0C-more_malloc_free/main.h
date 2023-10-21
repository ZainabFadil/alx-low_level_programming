#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _putchar(char c);
int isnum(char *str);
unsigned long int _atoi(char *str);
void _puts(char *str);
void print_number(unsigned long int n);
#endif
