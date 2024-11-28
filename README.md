![image](https://github.com/user-attachments/assets/0dcd69da-1e4a-44ad-80c9-7076e68f92ea)


# Project Printf

This project is about making a basic version of the printf function in C. It lets you show text and formatted data on the screen.
---

## 1. Clarity of the project

This project aims to provide a deeper explanation of variadic functions.

### Character :
```
#include <stdio.h>

/**
* main - Main function of my program
*
*Return: 0 if success
*/
 
int main() {
    char letter = 'A';    
   printf("%c\n", letter); 
   return 0;
}
```
stdout 'A'

### String : 
```
#include <stdio.h>

/**
* main - Main function of my program
*
*Return: 0 if success
*/
 
int main() {
    char str[] = "Hello world";    
   printf("%s\n", str); 
   return 0;
}
```
stdout "Hello world"

### Decimal : 
```
#include <stdio.h>

/**
* main - Main function of my program
*
*Return: 0 if success
*/
 
int main() {
    int integer = 46;    
   printf("%d\n", integer); 
   return 0;
}
```
stdout 46

## Man Page
```

```
## Compilation
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
## Authors
#### Kadiga HASSAN HOUMED
#### Ariane Marguerite DIATTA
#### Rania EL HEFNAWY

