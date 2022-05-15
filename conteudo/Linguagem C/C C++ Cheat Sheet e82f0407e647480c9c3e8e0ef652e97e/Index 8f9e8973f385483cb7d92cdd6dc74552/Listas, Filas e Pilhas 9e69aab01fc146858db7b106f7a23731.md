# Listas, Filas e Pilhas

[https://www.programiz.com/dsa/algorithm](https://www.programiz.com/dsa/algorithm)

- AQUIIIII
    
    ```c
    //Código da Luanne
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    struct no
    {
        char nome[50];
        char telefone [15];
        struct no * prox;
    };
    
    typedef struct
    {
        struct no * inicio;
        struct no * fim;
    } lista;
    
    lista l;
    
    void inicia(lista *l) {
        l->inicio=NULL;
        l->fim=NULL;
    }
    
    /*void insere(lista *l)
    {
        struct no *a;
    
        a = malloc(sizeof (struct no));
        if(a == NULL)
        {
            printf("Memoria esgotada!\n");
            return;
        }
    
        a->prox=NULL;
    
        printf("\n** CADASTRO DE TELEFONE **");
        printf("\nNome ");
        fflush(stdin);
        gets(a->nome);
    
        fflush(stdin);
        printf("\nDigite o telefone: ");
        gets(a->telefone);
    
        if(l->inicio == NULL)
        {
            l->inicio = a;
            l->fim = a;
        }
        else
        {
            l->fim->prox=a;
            l->fim = a;
        }
    
        printf("\nCadastro Realizado.");
        getch();
    }
    */
    void insereOrdenado (lista *l)
    {
        struct no *a, *p;
    
        p=l->inicio;
    
        a = malloc(sizeof (struct no));
        if(a == NULL)
        {
            printf("Memoria esgotada!\n");
            return;
        }
    
        a->prox=NULL;
    
        printf("\n** CADASTRO DE TELEFONE **");
        printf("\nNome ");
        fflush(stdin);
        gets(a->nome);
    
        fflush(stdin);
        printf("\nDigite o telefone: ");
        gets(a->telefone);
    
        if(l->inicio == NULL)
        {
            l->inicio = a;
            l->fim = a;
        }
        while(p!=NULL)
        {
            if(strcmpi(p->nome, a->nome)<0)
            {
                nome->prox=p;
                if(l->inicio==p)
                {
                    l->inicio=a;
                    break;
                }
                p=p->prox;
            }
            if(p==NULL)
            {
                l->fim->prox=a;
                l->fim=a;
            }
        }
    
        printf("\nCadastro Realizado.");
        getch();
    
    }
    
    void agenda(lista *l)
    {
        struct no *b;
    
        b = l->inicio;
    
        printf("\n** AGENDA **");
    
        while (b != NULL)
        {
            printf("\nNOME: %s -- TELEFONE: %s", b->nome, b->telefone);
            b = b->prox;
        }
    
        getch();
    }
    
    int main()
    {
        inicia(&l);
    
        int opcao;
    
        do
        {
            system("cls");
            printf("MENU OPCOES");
            printf("\n1- Cadastro de telefone");
            printf("\n2- Mostrar agenda");
            printf("\n3- Fim\n");
    
            printf("\nDigite a sua opcao: ");
            scanf("%d", &opcao);
    
            switch (opcao)
            {
            case 1:
                insere(&l);
                break;
            case 2:
                agenda(&l);
                break;
            default:
                printf("\nOpcao invalida!");
            }
    
        }
        while(opcao != 3);
    
    }
    ```