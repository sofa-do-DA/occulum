# Funções

Funções 

**STANDARD LIBRARY FUNCTIONS X USER-DEFINED FUNCTIONS**

## User defined

```c

#include <stdio.h>

void functionPrototype(type1, type2);

void functionName(type1, type2)
{
   //body of the function
  
	 //return statement
return (expression);
}

int main()
{
    functionName();
}
```

A function prototype is the declaration that specifies the name, parameters and return type of a function.

### **A function is a group of statements that perform a task.**

**Functions by Value:** Copies the actual value of an argument into the formal parameter of the function

O valor passado é uma cópia
do valor original.

**Functions by Reference:** If the original value changes.

O valor passado é uma cópia
do endereço de onde o valor
original está armazenado.

### Função Recursiva:

permitem a repetição de um bloco de códigos.

exemplo: uso fatorial

```c
func(...) {
if(condicaoDeParada)
return ...;
.
.
.
return func(...);
}
```

## C standard Library Functions

## <stdio.h>

## <string.h>

**gets():** Reads characters from the standard input (stdin) and stores them as a C string into str until a newline character or the end-of-file is reached.

- **Função com String**
    - `strlen`(a): Returns number of bytes in char of the string a as an integer. Excludes \0.
    - `strcpy`(a, b): Copies strings. Copies string b over string a up
    to and including \0.
    - `strcat`(a, b): Concatenates strings. Copies string b over string
    a up to and including\0, starting at the position of \0 in string a.
    - `strcmp`(a, b): Compares strings. Returns false if string a equals string b, true otherwise. Ignores characters after \0.
    - `strstr`(a, b): Searches for string b inside string a. Returns a
    pointer if successful, NULL otherwise.
- **Modifica String**
    - `tolower`: takes an uppercase alphabet and convert it to a lowercase character.
    - `toupper`: converts a lowercase alphabet to an uppercase alphabet.
    - `isalpha`: True if char is a letter of the alphabet, false
    otherwise.
    - `islower`: True if char is a lowercase letter of the alphabet,
    false otherwise.
    - `isupper`: True if char is an uppercase letter of the alphabet,
    false otherwise.
    - `isnumber`: True if char is numerical (0 to 9) and false
    otherwise.
    - `isdigit`: checks if the passed character is a decimal digit character.
    - `isalnum`: checks whether the argument passed is an alphanumeric character (alphabet or number).
- Código de Quantificar Strings
    
    ```c
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    
    main(){
        int i = 0;
        //quantidade de caracteres MAX na string
    
        char string[80];
        //num: quantidade de numeros
        //pont: quantidade de pontuacoes
        //min: quantidade de caracteres minusculos
    
        int num = 0, pont = 0, min = 0;
    
       printf("Insira uma string:");
       gets(string);
    
       //strlen: function takes a string as an argument and returns its length
        for(i=0;i<strlen(string);i++)
        {
            //isdigit:checks whether a character is numeric character
            if(isdigit(string[i]))
                num++;
            //isalnum:checks whether the argument is an alphanumeric character
            if(!isalnum(string[i]))
                pont++;
            //islower: checks whether a character is lowercase alphabet
            if (islower(string[i]))
                min++;
        }
    
        //IMPRIMIR RESULTADO
        printf("\nA string: %s", string);
        printf("\nQuantidade de caracteres: %d", strlen(string));
        printf("\nQuantidade de numeros: %d", num);
        printf("\nQuantidade de pontuacao: %d", pont);
        printf("\nQuantidade de caracteres minusculas: %d", min);
    
    return 0;
    
    }
    ```
    

## <math.h>