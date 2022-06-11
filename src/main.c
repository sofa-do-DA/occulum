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

// Variáveis principais usadas na função main
char termoDeBusca[100];
char caminhoAtual[TAMANHO_CAMINHO];
Arvore arquivosParaPesquisar = NULL;

int main(int argc, char const *argv[])
{
    /**
     * Requisito do trabalho:
     * - Uso da função 'usage()'
     *
     * Se a quantidade de argumentos passados para
     * o programa for > 1, faz a busca por "-h".
     * Caso ele seja encontrado, é exibida a mensagem
     * de usage(), e o programa para sua execução.
     */
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

    // Suporte para língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    // Mostra a logo do programa
    printf("\n");
    printf("\n");
    printf("               -+@@@@@@@+.          +@@@@@@@.       .#@@@@@@=     .@@:      .@@:    =@@       .@@+       @@*    :@@..*@@@@@#  :*@@@@@#\n");
    printf("           .@@#  #@#      #@@     +@@*     #@@.   :@@@     +@@#   .@@:      .@@:    =@@       .@@+       @@*    :@@@-     :@@@-     :@@.\n");
    printf("          *@- #@-           =@+   @@+       ==:   @@#       ===   .@@:      .@@:    =@@       .@@+       @@*    :@@.      :@@.      :@@:\n");
    printf("         *@=                 +@- #@@+             @@#             .@@:      .@@:    =@@       .@@+       @@*    :@@.      :@@.      :@@:\n");
    printf("          @#                 @#  #@@+             @@#             .@@:      .@@:    =@@       .@@+       @@*    :@@.      :@@.      :@@:\n");
    printf("           *@+             *@=    @@#      #@@+   *@@.     -@@#   .@@:      *@@:    =@@       .@@*      -@@*    :@@.      :@@.      :@@:\n");
    printf("      =@@##@* *#@@@*+#@@@#=        #@@@@@@@@@:     -@@@@@@@@@+     #@@@@@@@@+#@:    =@@@@@     *@@@@@@@@*#@*    :@@.      :@@.      :@@:\n");
    printf("   *@#.   *@#\n");
    printf("  @@#  *@@-\n");
    printf("     **\n");
    printf("\n");
    printf("\n");

    // Pega o caminho atual da execução do programa e concatena com a pasta "conteudo"
    if (getcwd(caminhoAtual, sizeof(caminhoAtual)) == NULL)
    {
        return -1;
    }
    strcat(caminhoAtual, "/conteudo");

    // Varre a pasta "conteudo" e insere os arquivos na arvore
    pegarConteudo(&arquivosParaPesquisar, caminhoAtual);

    do
    {
        // Pega o input do usuário para usar na pesquisa
        printf("\n");
        printf("Digite o que você quer buscar\n");
        printf("Para sair, escreva '/sair'\n");
        printf("> ");
        fflush(stdin);
        scanf("%s", termoDeBusca);

        // Mostrar conteúdo da árvore
        if (strcmp(termoDeBusca, "/sair") != 0)
        {
            printf("\nArquivos pra pesquisar\n");
            mostrarEmOrdem(arquivosParaPesquisar);
        }
    } while (strcmp(termoDeBusca, "/sair") != 0);

    return 0;
}
