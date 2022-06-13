#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _ARVORE_ARQUIVOS_H
#include "arvoreArquivos.h"
#endif

#ifndef _CMP_H
#include "cmp.h"
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
        printf("Nome: %s\n", no->nome);
        printf("Caminho: %s\n", no->caminho);
        printf("\n");
        mostrarEmOrdem(no->direita);
    }
}

void buscarArquivo(Arvore *no, char nome[])
{
    if (no == NULL)
    {
        printf("\nArvore vazia\n");
        return;
    }

    int comparacaoDoNome = string_cmp(nome, (*no)->nome);
    if (comparacaoDoNome == 0)
    {
        printf("ARQUIVO ENCONTRADO\n");
        printf("Nome: '%s'\n", (*no)->nome);
        printf("Caminho: '%s'\n", (*no)->caminho);
        printf("\n");
    }
    else if (comparacaoDoNome < 0)
    {
        buscarArquivo(&(*no)->esquerda, nome);
    }
    else
    {
        buscarArquivo(&(*no)->direita, nome);
    }
}
