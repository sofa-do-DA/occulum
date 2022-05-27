#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef _CMP_H
#include "../includes/cmp.h"
#endif

/**
 * Compara duas strings
 *
 * @param string1 string primária da comparação
 * @param string2 string a ser comparada com a string1
 *
 * @return Inteiro indicando a igualdade.
 * Quando 0 é retornado, as duas strings são iguais;
 * Quando -1 é retornado, a string1 é menor que a string2;
 * Quando 1 é retornado, a string1 é maior que a string2;
 */
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
}
