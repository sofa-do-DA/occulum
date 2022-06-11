# Pointer/ Ponteiros

Ponteiros

### **Pointers are a type of variable that store adresses rather than values using *, &, ++ and  - -.**

```c
//here is declared a pointer of int type
int* p;
```

```c
//the pointer is p1, while p2 is a normal variable
int* p1, p2;
```

- Ponteiros podem acessar variáveis definidas fora da função
- Ordenação

Ponteiro de Ponteiro: 

## Ponteiros e Vetores:

```c
#include <stdio.h>

int main() {
//vetor com 4 elementos
   int x[4];
   int i;

// a cada loop ele passa pelos elementos e mostra o endereco de cada, para depois registrar como ponteiro
   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

//no final declar o endereco do vetor
   printf("Address of array x: %p", x);

   return 0;
}
```

<aside>
📌 Address in C is given through &, so x and &x, aren't the same. If inputted into a printf, x would give the respective value, and &x should show it address location.

</aside>

### To acquire the value of the thing, we use *.

```c
int* p, c;

c = 5;
//the address of c, is assigned to p, and stored.
p = &c;

//p is a pointer, not *p.
printf("%d", *p);  

 // Output: 5
```

### ****Changing Value Pointed by Pointers****

```c
int* p, c, d;

c = 5;
d = -15;

//the address of c is stored in p.
//then prints the address of c
p = &c; printf("%d", *p); 
// Output: 5

//here d is assigned to the pointer, 
//then printed as its address.
p = &d; printf("%d", *p); 
// Ouptut: -15
```

### Pointers and Arrays