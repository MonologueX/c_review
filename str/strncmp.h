#include <stdio.h>
int strncmp(const char *first, const char *last, size_t count)
{
    size_t x = 0;

    if (!count)
    {
        return 0;
    }

    if( count >= 4 )
    {
        for (; x < count-4; x+=4)
        {
            first+=4;
            last +=4;

            if (*(first-4) == 0 || *(first-4) != *(last-4))
            {
                return(*(unsigned char *)(first-4) - *(unsigned char *)(last-4));
            }

            if (*(first-3) == 0 || *(first-3) != *(last-3))
            {
                return(*(unsigned char *)(first-3) - *(unsigned char *)(last-3));
            }

            if (*(first-2) == 0 || *(first-2) != *(last-2))
            {
                return(*(unsigned char *)(first-2) - *(unsigned char *)(last-2));
            }

            if (*(first-1) == 0 || *(first-1) != *(last-1))
            {
                return(*(unsigned char *)(first-1) - *(unsigned char *)(last-1));
            }
        }
    }

    for (; x < count; x++)
    {
        if (*first == 0 || *first != *last)
        {
            return(*(unsigned char *)first - *(unsigned char *)last);
        }
        first+=1;
        last+=1;
    }

    return 0;
}
