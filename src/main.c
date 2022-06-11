/*
Atividade final: Projeto completo
Occulum

Integrantes:
Leonardo Vilas Boas Mendes
Lucca Pagin Barbosa Rios
Nicole Carvalho Lisboa
Vinícius de Oliveira Yoshioka
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <unistd.h>
#include "usage.h"

#ifndef _FS_H
#include "fs.h"
#endif

#ifndef _TAMANHOS
#include "tamanhos.h"
#endif

#ifndef _ARVORE_ARQUIVOS_H
#include "arvoreArquivos.h"
#endif

int main(int argc, char const *argv[])
{

    if (argc > 1)
    {
        for (int i = 0; i < argc; i++)
        {
            if (strcmp(argv[i], "-h") == 0)
            {
                usage();
                return 0;
            }
        }
    }

    printf("\n");
    printf("\n");
    printf("               -+@@@@@@@+.          +@@@@@@@.       .#@@@@@@=     .@@:      .@@:    =@@       .@@+       @@*    :@@..*@@@@@#  :*@@@@@#    \n");
    printf("           .@@#  #@#      #@@     +@@*     #@@.   :@@@     +@@#   .@@:      .@@:    =@@       .@@+       @@*    :@@@-     :@@@-     :@@.  \n");
    printf("          *@- #@-           =@+   @@+       ==:   @@#       ===   .@@:      .@@:    =@@       .@@+       @@*    :@@.      :@@.      :@@:  \n");
    printf("         *@=                 +@- #@@+             @@#             .@@:      .@@:    =@@       .@@+       @@*    :@@.      :@@.      :@@:  \n");
    printf("          @#                 @#  #@@+             @@#             .@@:      .@@:    =@@       .@@+       @@*    :@@.      :@@.      :@@:  \n");
    printf("           *@+             *@=    @@#      #@@+   *@@.     -@@#   .@@:      *@@:    =@@       .@@*      -@@*    :@@.      :@@.      :@@:  \n");
    printf("      =@@##@* *#@@@*+#@@@#=        #@@@@@@@@@:     -@@@@@@@@@+     #@@@@@@@@+#@:    =@@@@@     *@@@@@@@@*#@*    :@@.      :@@.      :@@:  \n");
    printf("   *@#.   *@#                                                                                                                             \n");
    printf("  @@#  *@@-                                                                                                                               \n");
    printf("     **                                                                                                                                   \n");
    printf("\n");
    printf("\n");

    // Suporte para língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    // Pega o input do usuário para usar na pesquisa
    char buscar[100];
    printf("Digite o que você quer buscar: ");
    fflush(stdin);
    scanf("%s", buscar);

    // Pega o caminho atual da execução do programa e concatena com a pasta "conteudo"
    char caminhoAtual[TAMANHO_CAMINHO];
    if (getcwd(caminhoAtual, sizeof(caminhoAtual)) == NULL)
    {
        return -1;
    }
    strcat(caminhoAtual, "/conteudo");

    // Varre a pasta "conteudo" e insere os arquivos na arvore
    Arvore arquivosParaPesquisar = NULL;
    pegarConteudo(&arquivosParaPesquisar, caminhoAtual);

    // Mostrar conteúdo da árvore
    printf("\nArquivos pra pesquisar\n");
    mostrarEmOrdem(arquivosParaPesquisar);

    return 0;
}
