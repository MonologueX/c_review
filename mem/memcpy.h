#include <stdio.h>

void* Memcpy(char* dest, const char*src, size_t len)
{
    void* ret = dest;
    while (len--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest+1;
        src = (char*)src+1;
    }
    return ret;
}
