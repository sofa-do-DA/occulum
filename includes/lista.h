
typedef struct _ItemDaLista
{
    struct _ItemDaLista *anterior;
    struct _ItemDaLista *proximo;
    int dado;
} ItemDaLista;

typedef struct
{
    ItemDaLista *inicio;
    ItemDaLista *fim;
} Lista;

Lista *criarLista();

int inserirItem(Lista *lista, int dado);

int removerItem(Lista *lista, int dado);

int listaEstaVazia(Lista *lista);

void listaMostrarConteudo(Lista *lista, int sentido);
