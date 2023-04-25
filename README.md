# Pointers using c

A pointer is a variable that stores the memory address of another variable as its value.

A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

# Example
int myAge = 43;     // An int variable

int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)

printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)

printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)

printf("%p\n", ptr);

# Application of Pointers

There are many applications of pointers in c language.

1) Dynamic memory allocation

In c language, we can dynamically allocate memory using malloc() and calloc() functions where the pointer is used.

2) Arrays, Functions, and Structures

Pointers in c language are widely used in arrays, functions, and structures. It reduces the code and improves the performance.
