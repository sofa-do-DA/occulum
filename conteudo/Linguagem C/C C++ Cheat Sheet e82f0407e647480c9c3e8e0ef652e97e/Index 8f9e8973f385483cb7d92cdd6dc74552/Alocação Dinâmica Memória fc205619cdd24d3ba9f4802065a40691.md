# Alocação Dinâmica Memória

An array is a collection of a fixed number of values, but there are times that the size of the array declared may be insufficient. And here the use allocation of memory comes in.

Memória dinâmica 

-memória alocada em tempo de execução

## C malloc()

malloc - memory allocation

aloca memória e retorna um ponteiro (de void) para o primeiro byte da região alocada, se não for suficiente, retorna NULL.

- Listas, filas, árvores e grafos precisam de alocação dinâmica.
- Alocação dinâmica é qual o programa obtém o runtime, é a alocação de bloco de bytes em memória.
- É utilizada quando não existem informações inicias da quantidade de memória necessária

```c
//ptr = pointer
ptr = (castType*) malloc(size);

ptr = (float*) malloc(100 * sizeof(float));
//allocates 400 bytes of memory, since float is 4 bytes
```

```c
void *malloc(size_t numero_bytes);
```

free - libera a memória alocada, a partir do ponteiro

```c
free(ptr);
```