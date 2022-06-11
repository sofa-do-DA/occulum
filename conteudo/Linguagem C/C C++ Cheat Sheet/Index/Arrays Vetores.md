# Arrays/Vetores

Vetores

A array is a collection of similar type of data. It can store multiple values.

- todos elementos do mesmo tipo
- tem uma dimensão
- ocupa uma região da memória sem intervalo

<aside>
📌 In an array the first element is 0.

</aside>

```c
dataType arrayName[arraySize];

/*here we declared an array num, that can hold 5 interger values.
Once the size and type is declared it cannot be changed */

int num[5];

main()
{
int num[] = {1,2,3,4,5}
}
```

**Accessing array elements:** 

You are able to access elements of an array through indices, the first element is on the position 0.

```c
printf("%d", num[0]) // Resultado : 1
```

**Change Value of Array elements:**

```c
int mark[5] = {19, 10, 8, 17, 9}

// make the value of the third element to -1
mark[2] = -1;

// make the value of the fifth element to 0
mark[4] = 0;
```