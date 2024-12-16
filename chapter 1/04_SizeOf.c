// Topic: Understanding `sizeof` Operator in C

#include <stdio.h> // Including the standard input-output header file

int main() {
    // What is `sizeof` in C?
    // -----------------------
    // The `sizeof` operator in C is used to determine the size (in bytes) of a variable or a data type.
    // It is evaluated at compile time and provides the memory size required for storing a given type of data.

    // Syntax of `sizeof`:
    // --------------------
    // sizeof(data_type) or sizeof(variable)
    // - When used with a data type, it gives the size of that type.
    // - When used with a variable, it gives the size of the variable's data type.

    // Size of Basic Data Types in C
    // ------------------------------
    // The size of data types can vary based on the system architecture (32-bit or 64-bit).
    // Common sizes (in bytes) on most systems:
    // - char: 1 byte
    // - int: 4 bytes
    // - float: 4 bytes
    // - double: 8 bytes
    // - long: 8 bytes

    // Examples of Using `sizeof` Operator
    // ------------------------------------

    printf("Size of char: %zu bytes\n", sizeof(char));          // Size of char
    printf("Size of int: %zu bytes\n", sizeof(int));            // Size of int
    printf("Size of float: %zu bytes\n", sizeof(float));        // Size of float
    printf("Size of double: %zu bytes\n", sizeof(double));      // Size of double
    printf("Size of long: %zu bytes\n", sizeof(long));          // Size of long
    printf("Size of long long: %zu bytes\n", sizeof(long long));// Size of long long

    // Using `sizeof` with Variables
    // ------------------------------
    char c = 'A';       // Character variable
    int num = 100;      // Integer variable
    float f = 10.5;     // Floating-point variable
    double d = 20.1234; // Double variable

    printf("\nUsing `sizeof` with variables:\n");
    printf("Size of char variable: %zu bytes\n", sizeof(c));
    printf("Size of int variable: %zu bytes\n", sizeof(num));
    printf("Size of float variable: %zu bytes\n", sizeof(f));
    printf("Size of double variable: %zu bytes\n", sizeof(d));

    // Using `sizeof` with Arrays
    // ---------------------------
    int arr[5] = {1, 2, 3, 4, 5}; // Array of 5 integers
    printf("\nSize of array: %zu bytes\n", sizeof(arr)); // Total size of array
    printf("Size of one element in array: %zu bytes\n", sizeof(arr[0]));
    printf("Number of elements in array: %zu\n", sizeof(arr) / sizeof(arr[0]));

    // Special Notes
    // --------------
    // 1. The `sizeof` operator always returns an unsigned integer value.
    // 2. Use `%zu` as the format specifier to print the result of `sizeof` safely.
    // 3. The size of data types may vary between compilers and architectures.
    //    It's important to test and confirm the sizes when writing portable code.

    return 0; // Indicates successful program termination
}

// Summary of Output:
// -------------------
// - This program demonstrates the use of the `sizeof` operator in C.
// - It calculates the size of basic data types, variables, and arrays.
// Example Output:
// Size of char: 1 bytes
// Size of int: 4 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// Size of long: 8 bytes
// Size of long long: 8 bytes
// Size of array: 20 bytes
// Size of one element in array: 4 bytes
// Number of elements in array: 5
