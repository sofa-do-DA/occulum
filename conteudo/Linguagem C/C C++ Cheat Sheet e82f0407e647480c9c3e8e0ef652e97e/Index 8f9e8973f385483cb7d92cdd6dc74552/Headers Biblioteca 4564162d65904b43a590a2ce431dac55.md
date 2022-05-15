# Headers/Biblioteca

**<bibliotecas>** 

realiza tarefa comuns 

padrão de função → linkeditadas, combina o código com o código-objeto da biblioteca.

# Tipos de Bibliotecas e suas Funções:

## Mais Utilizados-

<aside>
📌 **#include<stdio.h>:** Permite realizar operações de entrada/saída usando funções **scanf()** e **printf()**.

</aside>

- EXEMPLO
    
    ```c
    #include <stdio.h>
    
    int main() 
    {
    
     int idade;
    
     printf("Insira sua idade:");
     scanf("&d", idade);
    
       return 0;
    }
    ```
    

<aside>
💡 **#include<string.h>:** It is used to perform various functionalities related to string manipulation like **[strlen()](https://www.geeksforgeeks.org/strlen-function-in-c/)**, **[strcmp()](https://www.geeksforgeeks.org/strcmp-in-c-cpp/)**, **[strcpy()](https://www.geeksforgeeks.org/strcpy-in-c-cpp/)**, size(), etc.

</aside>

<aside>
💡 **#include<math.h>:** It is used to perform mathematical operations like **[sqrt()](https://www.geeksforgeeks.org/sqrt-sqrtl-sqrtf-cpp/)**, **[log2()](https://www.geeksforgeeks.org/log2-function-in-c-with-examples/)**, **[pow()](https://www.geeksforgeeks.org/power-function-cc/)**, etc.

</aside>

<aside>
❓ **#include<stdlib.h>:** Ela possui funções envolvendo alocação de memória, controle de processos, conversões e outras.

</aside>

---

<aside>
💡 **#include<iostream>:** It is used as a stream of Input and Output using cin and cout.

</aside>

<aside>
💡 **#include<limits.h>:** It determines various properties of the various variable types. The macros defined in this header, limits the values of various variable types like **char**, **int**, and **long**. These limits specify that a variable cannot store any value beyond these limits, for example an unsigned character can store up to a maximum value of **255**.

</aside>

<aside>
💡 **#include<time.h>:** It is used to perform functions related to date() and **[time()](https://www.geeksforgeeks.org/time-function-in-c/)** like **[setdate() and getdate()](https://www.geeksforgeeks.org/getdate-and-setdate-function-in-c-with-examples/)**. It is also used to modify the system date and get the CPU time respectively.

</aside>

<aside>
💡 **#include<signal.h>:** It is used to perform signal handling functions like **signal()** and **raise()**.

</aside>

<aside>
💡 **#include<errno.h>:** It is used to perform **[error handling](https://www.geeksforgeeks.org/error-handling-c-programs/)** operations like **errno()**, **strerror()**, **perror()**, etc.

</aside>

<aside>
💡 **#include<stdarg.h>:**It is used to perform standard argument functions like **va_start()** and **va_arg()**. It is also used to indicate start of the variable-length argument list and to fetch the arguments from the variable-length argument list in the program respectively.

</aside>

<aside>
💡 **#include<float.h>:** It contains a set of various platform-dependent constants related to floating point values. These constants are proposed by ANSI C. They allow making programs more portable. Some examples of constants included in this header file are- e(exponent), b(base/radix), etc.

</aside>

<aside>
💡 **#include<iomanip.h>:** It is used to access set() and setprecision() function to limit the decimal places in variables.

</aside>

<aside>
💡 **#include<fstream.h>:** It is used to control the data to read from a file as an input and data to write into the file as an output.

</aside>

INCLUIR

conio.h

- [ctype.h](https://www.ime.usp.br/~pf/algoritmos/apend/ctype.h.html)
- [stdbool.h](https://www.ime.usp.br/~pf/algoritmos/apend/stdbool.h.html)