#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

#ifndef _FS_H
#include "../includes/fs.h"
#endif

#ifndef _LISTA_STRING_H
#include "../includes/listaString.h"
#endif

void pegarConteudo(ListaString *arquivos, char caminho[])
{
    printf("Varrendo pasta '%s'\n", caminho);

    DIR *dir = opendir(caminho);
    struct dirent *dirent;

    char caminhoDoArquivo[TAMANHO_CAMINHO];

    if (dir != NULL)
    {
        while ((dirent = readdir(dir)) != NULL)
        {
            // Ignora as pastas "." e ".."
            if (strcmp(dirent->d_name, ".") == 0 || strcmp(dirent->d_name, "..") == 0)
            {
                continue;
            }

            // Monta a string com o caminho completo do arquivo
            strcpy(caminhoDoArquivo, caminho);
            strcat(caminhoDoArquivo, "/");
            strcat(caminhoDoArquivo, dirent->d_name);

            // Verifica se o caminho é arquivo ou pasta
            struct stat *buffer = (struct stat *)malloc(sizeof(struct stat));
            stat(caminhoDoArquivo, buffer);
            if (S_ISREG(buffer->st_mode))
            {
                // Arquivos
                // Adiciona arquivo na lista
                free(buffer);
                inserirItemString(arquivos, caminhoDoArquivo);
            }
            else
            {
                // Pasta
                // Pega o conteúdo da pasta recursivamente
                free(buffer);
                pegarConteudo(arquivos, caminhoDoArquivo);
            }
        }
        closedir(dir);
    }
}
