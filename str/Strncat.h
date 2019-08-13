#include <stdio.h>
char* Strncat(char* front, const char* back, size_t count)
{
    char *start = front;
    while (*front++)
        ;
    front--;

    while (count--)
        if (!(*front++ = *back++))
            return(start);

    *front = '\0';
    return(start);
}
