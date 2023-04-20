#include <stdio.h>
#include<stdlib.h>
#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
