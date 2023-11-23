#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    //if (b == NULL)
      //  return 0;
    
    unsigned int result = 0;

    while (*b != '\0')
    {
        if (*b == '0' || *b == '1')
        {
            result = result * 2 + (*b - '0');
            b++;

        }
        else
            return 0;
    }
    return result;
}