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

void mostrarPreOrdem(Arvore no)
{
    if (no != NULL)
    {
        printf("%s %s\n", no->nome, no->caminho);
        mostrarPreOrdem(no->esquerda);
        mostrarPreOrdem(no->direita);
    }
    else
        printf("NULL\n");
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

void mostrarPosOrdem(Arvore no)
{
    if (no != NULL)
    {
        mostrarPosOrdem(no->esquerda);
        mostrarPosOrdem(no->direita);
        printf("%s %s\n", no->nome, no->caminho);
    }
    else
        printf("NULL\n");
}

Arvore *removerItem(Arvore *no, char nome[], char caminho[])
{
    Arvore *temp, *temp2;

    if (strcmp((*no)->nome, nome) == 0)
    {
        if ((*no)->esquerda == (*no)->direita)
        {
            // Remove as folhas
            free(no);
            return NULL;
        }
    }

    else if (strcmp((*no)->caminho, caminho) == 0)
    {
        if (strcmp((*no)->esquerda, (*no)->direita))
        {
            // Remove as folhas
            free(no);
            return NULL;
        }
    }

    else
    {
        if ((*no)->esquerda == NULL)
        {
            // O nó é deslocado para direita
            temp = (*no)->direita;
            free(no);
            return temp;
        }
        else if ((*no)->direita == NULL)
        {
            // O nó é deslocado para esquerda
            temp = (*no)->esquerda;
            free(no);
            return temp;
        }
        else
        {
            temp2 = (*no)->direita;
            temp = (*no)->direita;

            while ((*temp)->esquerda)
            {
                temp = (*temp)->esquerda;
            }

            (*temp)->esquerda = (*no)->esquerda;
            free(no);
            return temp2;
        }
    }
    // Quando o item for encontrado, ambos nome e caminho ....
    if ((*no)->nome < nome)
    {
        if ((*no)->direita != NULL)
            (*no)->direita = removerItem((*no)->esquerda, nome, caminho);
        else
            printf("Elemento nao encontrado.\n");
    }

    if ((*no)->caminho < caminho)
    {
        if ((*no)->direita != NULL)
            (*no)->direita = removerItem((*no)->esquerda, nome, caminho);
        else
            printf("Elemento nao encontrado.\n");
    }

    else
    {
        if ((*no)->esquerda != NULL)
            (*no)->esquerda = removerItem((*no)->esquerda, nome, caminho);

        else
            printf("Elemento não encontrado\n");
    }
    return (*no);
}
