
// Definição para verificar se este header já foi importado ou não
#define _CMP_H 1

/**
 * Converte a string para caracteres minúsculos
 *
 * @param string string a ser convertida para minúscula
 */
void lowerString(char string[]);

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
int string_cmp(char string1[], char string2[]);
