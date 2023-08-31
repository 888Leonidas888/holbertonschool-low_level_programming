#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void print_name_uppercase(char *name);

#endif
