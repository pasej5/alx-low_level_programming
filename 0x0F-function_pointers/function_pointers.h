#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name_uppercase(char *name);

#endif

