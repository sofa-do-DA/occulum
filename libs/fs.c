#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

#ifndef _TAMANHOS
#include "tamanhos.h"
#endif

#ifndef _FS_H
#include "../includes/fs.h"
#endif

#ifndef _ARVORE_ARQUIVOS_H
#include "../includes/arvoreArquivos.h"
#endif

void pegarConteudo(Arvore *arquivos, char caminho[])
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
                // Adiciona arquivo na árvore
                free(buffer);
                adicionarItem(arquivos, dirent->d_name, caminhoDoArquivo);
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
