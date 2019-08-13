#include <stdio.h>
size_t strlen(const char* str)
{
    const char *eos = str;
    while(*eos++) ;
    return(eos - str - 1);
}
