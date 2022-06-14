#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef _CMP_H
#include "cmp.h"
#endif

int string_cmp(char string1[], char string2[])
{
    int i;
    int tamanhoString = strlen(string1);

    for (i = 0; i < tamanhoString; i++)
    {
        if (tolower(string1[i]) < tolower(string2[i]))
        {
            return -1;
        }
        else if (tolower(string1[i]) > tolower(string2[i]))
        {
            return 1;
        }
    }

    if (tolower(string1[i]) < tolower(string2[i]))
    {
        return -1;
    }

    return 0;
}
