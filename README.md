![image](https://github.com/user-attachments/assets/0dcd69da-1e4a-44ad-80c9-7076e68f92ea)
# Project Printf

This project is about making a basic version of the printf function in C. It lets you show text and formatted data on the screen.
#### va_list : 
It is used to declare variable that can be used to access the arguments of a variadic function.
#### va_start : 
Initialise the argument list (ap).
#### va_end : 
Frees the resources used by va_list.

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
#### Outpout :

A

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
#### Output :

Hello world

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
#### Output : 

46

## File Structure

### main.h
Header file containing function prototypes.
### main.c
It is used to test the _printf function.
### _putchar.c
The file is used to print a character to the standard output(stdout) using the "write" function.

## Man Page
```
Here is our [![Copie de Exemple d'algorigramme](https://github.com/user-attachments/assets/8fc2f389-49aa-42cb-a431-d4f74af6baf7)
manual page](https://github.com/Rania-elh/holbertonschool-printf/blob/main/man_3_printf)
```
## Compilation
All our code will be compiled on Ubuntu 20.04 LTS with :

```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
## Authors
#### [Kadiga](https://github.com/Kadiga6)
#### [Ariane](https://github.com/a-ian3)
#### [Rania](https://github.com/Rania-elh)
