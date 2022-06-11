# Structs

Struct 
Typedef Struct
A structure is a user defined data type, that combines data items of different kinds. They could represent a record.

### Struct

First you must define a structure, define a new data type.  A `struct`  tag is optional, and a member can be any variable.

At the end of a structure, before the final semicolon, you  can specify more structure variables.

Uma struct é uma variável que contém outras variáveis de tipos diferentes.

```c
struct identificador
{
int i;
float f;
};
typedef struct
{
int i;
float f;
} identificador ;
```

### Accessing Structure Members

To access any mermber we use`.` . The member is coded as a period between the struct variable name and member.

### 

```c
struct [structure tag] {

//char  name[50];
   member definition;
   member definition;
   member definition;

} [one or more structure variables];
```

```c
#include <stdio.h>
#include <string.h>
 
//main struct that identifies the members
struct Books {
//the members have a charcter limit
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( ) {

		//these structs will recieve data from the users declaring info for the members
   struct Books Book1;        /* Declare Book1 of type Book */
   struct Books Book2;        /* Declare Book2 of type Book */
 
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   /* print Book1 info */
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

   /* print Book2 info */
   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

   return 0;
}
```