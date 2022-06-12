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
    int i = 0;

    // Enquanto as duas strings forem iguais
    while (string1[i] == string2[i])
    {
        // Faz verficação quando as duas strings terminarem
        if (string1[i] == '\0' && string2[i] == '\0')
        {
            return 0;
        }
        i += 1;
    }

    // Faz verificação quando a primeira string terminou
    if (string1[i] == '\0' && string2[i] != '\0')
    {
        return -1;
    }
    // Faz verificação quando a segunda string terminou
    if (string1[i] != '\0' && string2[i] == '\0')
    {
        return 1;
    }

    // Identifica quando um caractere for menor que o outro
    if (tolower(string1[i]) < tolower(string2[i]))
    {
        return -1;
    }
    // Identifica quando um caractere for maior que o outro
    if (tolower(string1[i]) > tolower(string2[i]))
    {
        return 1;
    }

    // Retornado caso nenhuma condição anterior seja atendida
    return -1;
}
