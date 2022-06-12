#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef _CMP_H
#include "cmp.h"
#endif

void lowerString(char string[])
{
    int tamanhoString = strlen(string);
    for (int i = 0; i < tamanhoString; i++)
    {
        string[i] = tolower(string[i]);
    }
}

int string_cmp(char string1[], char string2[])
{
    // Converte as string para minúsculo
    lowerString(string1);
    lowerString(string2);

    // Compara as duas strings
    return strcmp(string1, string2);
}
