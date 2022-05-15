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
#include "../includes/fs.h"

int main()
{
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

    // Varre a pasta "conteudo" e insere os arquivos na lista
    ListaString *arquivosParaPesquisar = criarListaString();
    pegarConteudo(arquivosParaPesquisar, caminhoAtual);

    printf("\nArquivos pra pesquisar\n");
    listaStringMostrarConteudo(arquivosParaPesquisar, 0);

    return 0;
}
