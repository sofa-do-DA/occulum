# C/C++ Cheat Sheet

[Index](C%20C++%20Cheat%20Sheet%20e82f0407e647480c9c3e8e0ef652e97e/Index%208f9e8973f385483cb7d92cdd6dc74552.csv)

Base Code

```c
#include <stdio.h>

int main() 
{
  
   return 0;
}
```

```c
[INCLUSAO DA BIBLIOTECA]
[DECLARACAO DE DADOS GLOBAIS]
[DECLARACAO DOS PROTOTIPOS DE FUNCOES]

int main() 
{
  [CORPO DO PROGRAMA PRINCIPAL]
}

[IMPLEMENTACAO DAS FUNCOES DO PROGRAMA]
```

### Useful Pages/Páginas Uteis

- [https://www.mikedane.com/programming-languages/c/in-one-video/](https://www.mikedane.com/programming-languages/c/in-one-video/)    (index is based)
- [https://www.codewithharry.com/blogpost/c-cheatsheet](https://www.codewithharry.com/blogpost/c-cheatsheet)
- [https://www.techiedelight.com/trapping-rain-water-within-given-set-bars/](https://www.techiedelight.com/trapping-rain-water-within-given-set-bars/)
- [https://guialinux.uniriotec.br/biblioteca-c/](https://guialinux.uniriotec.br/biblioteca-c/)

### Trabalho e Exercícios para fazer

- [ ]  

[ashlyn-black_c-reference.pdf](C%20C++%20Cheat%20Sheet%20e82f0407e647480c9c3e8e0ef652e97e/ashlyn-black_c-reference.pdf)

<aside>
💡 Use Toggle list as flashcards!!!

</aside>

[https://studywithme.io/aesthetic-pomodoro-timer/](https://studywithme.io/aesthetic-pomodoro-timer/)

---

## Notes:

# ANOTAÇÕES FEITAS NAS AULAS (sem organização)

- Código “FizzBuzz”
    
    ```c
    #include<stdio.h>
    
    main(){
         int i;
        for(i = 1; i<=100; i++)
    
        {
        //exemplo: 15 e divisivel por 3 e 5
        if(i%3 == 0 && i%5 == 0)
        printf("\nFizzBuzz");
    
        //DIVISIVEL POR 3
        else if(i%3 == 0)
        printf("\nFizz");
    
        //DIVISIVEL POR 5
        else if(i%5 == 0)
        printf("\nBuzz");
    
        //IMPRIMIR NUMERO
        else
        printf("\n%d",i);
        }
    
    return 0;
    ```
    

- Número Palíndromo
    
    ```jsx
    #include <stdio.h>
    
    int main()
    {
        int i,primeiro,segundo, temp, palin, resto;
    
        
        //COLECIONAR DADOS
        printf("Insira um numero:");
        scanf("%d",&primeiro);
        fflush(stdin);
    
        printf("\nInsira outro numero:");
        scanf("%d",&segundo);
        fflush(stdin);
    
         //enquantos os numeros forem aqueles entre os inseridos
    
        for(i = primeiro;i<=segundo;i++)
    
    {
            temp = i;
            palin = 0;
    
            
            //Primeiro reverte o numero, para depois comparar ele consigo mesmo
            while(temp > 0){
    
                 resto = temp%10;
                 palin = palin *10 + resto;
                 temp = temp/10;
    }
            //assim se ele for igual ao reverso de si mesmo, ira imprimir no final
        if( i == palin)
        {
                printf("\n%d", i);
    
        }
    }
       return 0;
    }
    ```
    

FUNÇÕES

gets()

Fila e Pilha

Fila, é na ordem de chegada

First in first out

Pilha, Last in first out

topo da pilha