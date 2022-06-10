#ifndef _ARVORE_ARQUIVOS_H
#include "../includes/arvoreArquivos.h"
#endif

// Definição para verificar se este header já foi importado ou não
#define _FS_H 1

/**
 * Lista, recursivamente, o conteúdo da pasta dada pelo parâmetro 'caminho',
 * os arquivos são adicionados à árvore dada pelo parâmetro 'arquivos' e
 * as pastas são varridas com recursão
 *
 * @param arquivos Ponteiro de uma Arvore que armazena caminhos de arquivos
 * @param caminho Caminho da pasta a ser lida
 */
void pegarConteudo(Arvore *arquivos, char caminho[]);
