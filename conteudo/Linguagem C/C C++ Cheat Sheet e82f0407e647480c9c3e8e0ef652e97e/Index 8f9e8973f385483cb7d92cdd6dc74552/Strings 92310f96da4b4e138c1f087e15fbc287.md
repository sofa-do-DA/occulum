# Strings

Strings are one dimensional array of characters, also consisting of a *null* character ‘\0’. **YOU DO NOT PLACE THE \0.** 

```c
#include <stdio.h>

int main () {

//it would need for spaces to fit a 5 letter word, since the \0 will also
//be included
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
printf("Greeting message: %s\n", greeting );
   return 0;
}
```

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
    - **`strchr`**(a, ch): Returns a pointer to the first occurrence of character ch in string s1.
    
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