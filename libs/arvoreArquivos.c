#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _ARVORE_ARQUIVOS_H
#include "arvoreArquivos.h"
#endif

void adicionarItem(Arvore *no, char nome[], char caminho[])
{
    if (*no == NULL)
    {
        // Aloca memória para criar a função insere
        *no = (Arvore *)malloc(sizeof(Arvore));

        // Inserir quando a árvore estiver vazia
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
    // Inserir quando já houver dados na árvore
    else if (strcmp(nome, (*no)->nome) < 0 || strcmp(caminho, (*no)->caminho) < 0)
        adicionarItem(&(*no)->esquerda, nome, caminho);
    else if (strcmp(nome, (*no)->nome) > 0 || strcmp(caminho, (*no)->caminho) > 0)
        adicionarItem(&(*no)->direita, nome, caminho);
    else
        printf("Duplicação de no\n");
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
