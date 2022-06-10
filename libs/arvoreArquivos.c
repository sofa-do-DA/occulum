#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _ARVORE_ARQUIVOS_H
#include "arvoreArquivos.h"
#endif

void adicionarItem(Arvore *no, char nome[], char caminho[])
{
    // Cria um nó e insere dados quando a árvore estiver vazia
    if (*no == NULL)
    {
        *no = (struct ItemArvore *)malloc(sizeof(struct ItemArvore));

        if (*no != NULL)
        {
            (*no)->esquerda = NULL;
            (*no)->direita = NULL;

            strcpy((*no)->nome, nome);
            strcpy((*no)->caminho, caminho);
        }
        else
            printf("Memória Insuficiente\n");
    }
    // Quando já houver dados na árvore
    // Inserir à esquerda se o nome do arquivo for <= ao nome do arquivo existente
    else if (strcmp(nome, (*no)->nome) <= 0)
    {
        adicionarItem(&(*no)->esquerda, nome, caminho);
    }
    // Inserir à direita se o nome do arquivo for > que o nome do arquivo existente
    else if (strcmp(nome, (*no)->nome) > 0)
    {
        adicionarItem(&(*no)->direita, nome, caminho);
    }
}

void mostrarEmOrdem(Arvore no)
{
    if (no != NULL)
    {
        mostrarEmOrdem(no->esquerda);
        printf("%s %s\n", no->nome, no->caminho);
        mostrarEmOrdem(no->direita);
    }
}
