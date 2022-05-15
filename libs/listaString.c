#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/listaString.h"

/**
 * Aloca memória para ListaString, define suas propriedade como NULL,
 * pois está vazia, e retorna o ponteiro dela
 */
ListaString *criarListaString()
{
    ListaString *lista = (ListaString *)malloc(sizeof(ListaString));
    lista->inicio = NULL;
    lista->fim = NULL;
    return lista;
}

/**
 * Adiciona dado na lista
 * Retorna 0 se não houver erro
 * Retorna -1 se não houver memória
 */
int inserirItemString(ListaString *lista, char dado[])
{
    // Aloca memória para criar ItemDaListaString
    ItemDaListaString *itemDaLista = (ItemDaListaString *)malloc(sizeof(ItemDaListaString));

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
        strcpy(itemDaLista->dado, dado);
        itemDaLista->proximo = lista->inicio;
        itemDaLista->anterior = lista->fim;
        return 0;
    }

    // Adiciona o item na lista, quando esta não estiver vazia
    strcpy(itemDaLista->dado, dado);
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
int removerItemString(ListaString *lista, char dado[])
{
    ItemDaListaString *itemDaLista = (ItemDaListaString *)malloc(sizeof(ItemDaListaString));

    // Retorna 0, pois a lista está vazia
    if (lista->inicio == NULL)
    {
        return 0;
    }

    itemDaLista = lista->inicio;
    do
    {
        // Remove o item da lista
        if (strcpy(itemDaLista->dado, dado) == 0)
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
int listaStringEstaVazia(ListaString *lista)
{
    if (lista->inicio == NULL)
    {
        return 1;
    }
    return 0;
}

/**
 * Monstra o conteúdo da lista
 * Quando sentido = 0, a lista anda do início ao fim,
 * quando sentido != 0, a lista anda do fim ao início
 */
void listaStringMostrarConteudo(ListaString *lista, int sentido)
{
    ItemDaListaString *itemDaLista = (ItemDaListaString *)malloc(sizeof(ItemDaListaString));
    if (lista->inicio == NULL)
    {
        printf("ListaString vazia\n");
    }
    else
    {
        if (sentido == 0)
        {
            itemDaLista = lista->inicio;
            do
            {
                printf("%s\n", itemDaLista->dado);
                itemDaLista = itemDaLista->proximo;
            } while (itemDaLista != lista->inicio);
        }
        else
        {
            itemDaLista = lista->fim;
            do
            {
                printf("%s\n", itemDaLista->dado);
                itemDaLista = itemDaLista->anterior;
            } while (itemDaLista != lista->fim);
        }
    }
}
