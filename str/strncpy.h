#include <stdio.h>

// 如果只拷贝一部分，可能没有 '\0'

char* strncpy(char* dest, const char* source, size_t count)
{
    char *start = dest;
    while (count && (*dest++ = *source++))
        count--;
    if (count)
        while (--count)
            *dest++ = '\0';
    return(start);
}
