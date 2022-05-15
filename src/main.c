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

    printf("Digite o que você quer buscar: ");
    fflush(stdin);
    gets(buscar);

    return 0;
}
