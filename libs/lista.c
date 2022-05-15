#include <stdio.h>
#include <stdlib.h>
#include "../includes/lista.h"

/**
 * Aloca memória para Lista, define suas propriedade como NULL,
 * pois está vazia, e retorna o ponteiro dela
 */
Lista *criarLista()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->fim = NULL;
    return lista;
}

/**
 * Adiciona dado na lista
 * Retorna 0 se não houver erro
 * Retorna -1 se não houver memória
 */
int inserirItem(Lista *lista, int dado)
{
    // Aloca memória para criar ItemDaLista
    ItemDaLista *itemDaLista = (ItemDaLista *)malloc(sizeof(ItemDaLista));

    // Retorna -1 se não houver memória disponível
    if (itemDaLista == NULL)
    {
        return -1;
    }

    // Adiciona o item na lista, quando esta estiver vazia
    if (lista->inicio == NULL)
    {
        lista->inicio = itemDaLista;
        lista->fim = itemDaLista;
        itemDaLista->dado = dado;
        itemDaLista->proximo = lista->inicio;
        itemDaLista->anterior = lista->fim;
        return 0;
    }

    // Adiciona o item na lista, quando esta não estiver vazia
    itemDaLista->dado = dado;
    itemDaLista->anterior = lista->fim;
    lista->fim->proximo = itemDaLista;
    itemDaLista->proximo = lista->inicio;
    lista->inicio->anterior = itemDaLista;
    lista->fim = itemDaLista;
    return 0;
}

/**
 * Remove o dado da lista
 * Retorna 0 se não houver erro na remoção, se a lista estiver vazia
 * ou se o item nao estiver na lista
 */
int removerItem(Lista *lista, int dado)
{
    ItemDaLista *itemDaLista = (ItemDaLista *)malloc(sizeof(ItemDaLista));

    // Retorna 0, pois a lista está vazia
    if (lista->inicio == NULL)
    {
        return 0;
    }

    itemDaLista = lista->inicio;
    do
    {
        // Remove o item da lista
        if (itemDaLista->dado == dado)
        {
            itemDaLista->anterior->proximo = itemDaLista->proximo;
            itemDaLista->proximo->anterior = itemDaLista->anterior;
            return 0;
        }

        itemDaLista = itemDaLista->proximo;
    } while (itemDaLista != lista->inicio);

    return 0;
}

/**
 * Verifica se a lista está vazia. Isso é feito comparando
 * a propriedade inicio da lista com NULL
 * Retorna 1 se verdadeiro, falso caso contrário
 */
int listaEstaVazia(Lista *lista)
{
    if (lista->inicio == NULL)
    {
        return 1;
    }
    return 0;
}

/**
 * Mostra o conteúdo da lista
 * Quando sentido = 0, a lista anda do início ao fim,
 * quando sentido != 0, a lista anda do fim ao início
 */
void listaMostrarConteudo(Lista *lista, int sentido)
{
    ItemDaLista *itemDaLista = (ItemDaLista *)malloc(sizeof(ItemDaLista));
    if (lista->inicio == NULL)
    {
        printf("Lista vazia\n");
    }
    else
    {
        if (sentido == 0)
        {
            itemDaLista = lista->inicio;
            do
            {
                printf("%d", itemDaLista->dado);
                itemDaLista = itemDaLista->proximo;
            } while (itemDaLista != lista->inicio);
        }
        else
        {
            itemDaLista = lista->fim;
            do
            {
                printf("%d", itemDaLista->dado);
                itemDaLista = itemDaLista->anterior;
            } while (itemDaLista != lista->fim);
        }
    }
}
