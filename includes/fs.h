#ifndef _LISTA_STRING_H
#include "../includes/listaString.h"
#endif

// Definição para verificar se este header já foi importado ou não
#define _FS_H 1

// Define o tamanho da string que armazena caminhos completos de arquivos/pastas
#define TAMANHO_CAMINHO 4096

// Define o tamanho da string que armazena o nome de arquivos
#define TAMANHO_NOME_ARQUIVO 256

/**
 * Lista, recursivamente, o conteúdo da pasta dada pelo parâmetro 'caminho',
 * os arquivos são adicionados à lista dada pelo parâmetro 'arquivos' e
 * as pastar são varridas com recursão
 *
 * @param arquivos Ponteiro de uma ListaString que armazena caminhos de arquivos
 * @param caminho Caminho da pasta a ser lida
 */
void pegarConteudo(ListaString *arquivos, char caminho[]);
