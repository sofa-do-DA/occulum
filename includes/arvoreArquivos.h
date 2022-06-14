#ifndef _TAMANHOS
#include "tamanhos.h"
#endif

// Definição para verificar se este header já foi importado ou não
#define _ARVORE_ARQUIVOS_H 1

/**
 * @param esquerda Ponteiro do ItemArvore filho à esquerda do item atual
 * @param direita Ponteiro do ItemArvore filho à direita do item atual
 * @param nome String do nome do arquivo
 * @param caminho String do caminho completo do arquivo
 */
struct ItemArvore
{
    struct ItemArvore *esquerda;
    struct ItemArvore *direita;
    char nome[TAMANHO_NOME_ARQUIVO];
    char caminho[TAMANHO_CAMINHO];
};

typedef struct ItemArvore *Arvore;

/**
 * Insere novos dados à árvore
 *
 * @param no Ponteiro da árvore
 * @param nome String com o nome do arquivo
 * @param caminho String com o caminho completo do arquivo
 */
void adicionarItem(Arvore *no, char nome[], char caminho[]);

/**
 * Mostra o conteúdo da árvore em ordem
 * @param no Ponteiro da árvore
 */
void mostrarEmOrdem(Arvore no);

/**
 * Busca arquivos com mesmo nome do parâmetro nome na árvore
 * e mostra os resultados
 *
 * @param no Ponteiro da árvore
 * @param nome String com o nome a ser pesquisado
 */
void buscarArquivo(Arvore no, char nome[]);
