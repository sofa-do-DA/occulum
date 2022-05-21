
typedef struct _ItemDaListaString
{
    struct _ItemDaListaString *anterior;
    struct _ItemDaListaString *proximo;
    char dado[4096];
} ItemDaListaString;

typedef struct
{
    ItemDaListaString *inicio;
    ItemDaListaString *fim;
} ListaString;

ListaString *criarListaString();

int inserirItemString(ListaString *lista, char dado[]);

int removerItemString(ListaString *lista, char dado[]);

int listaStringEstaVazia(ListaString *lista);

void listaStringMostrarConteudo(ListaString *lista, int sentido);

void inserirOrdenadoItemString(ListaString *lista, char dado[]);
