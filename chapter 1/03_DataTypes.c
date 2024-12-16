// Topic: Data Types in C

#include <stdio.h> // Including the standard input-output header file

int main() {
    // What are Data Types?
    // ---------------------
    // Data types in C define the type and size of data that a variable can store.
    // They help the compiler understand what kind of data to expect and allocate memory accordingly.

    // Categories of Data Types in C:
    // -------------------------------
    // 1. **Basic Data Types**: int, float, char, double
    // 2. **Derived Data Types**: arrays, pointers, structures
    // 3. **Enumeration Data Types**: enum
    // 4. **Void Data Type**: void

    // Basic Data Types in C
    // ----------------------

    // 1. Integer (int):
    // - Used to store whole numbers (e.g., -5, 0, 100).
    // - Memory size: 4 bytes (typically).
    // - Format specifier: %d or %i
    int a = 5; // Declaring an integer variable 'a' and assigning it a value.

    // 2. Character (char):
    // - Used to store a single character (e.g., 'A', 'b').
    // - Memory size: 1 byte.
    // - Format specifier: %c
    char initial = 'A'; // Declaring a character variable 'initial' and assigning it a value.

    // 3. Floating Point (float):
    // - Used to store decimal numbers (e.g., 3.14, -2.5).
    // - Memory size: 4 bytes.
    // - Format specifier: %f
    float cgpa = 9.5; // Declaring a floating-point variable 'cgpa' and assigning it a value.

    // 4. Double (double):
    // - Used to store double-precision floating-point numbers.
    // - Memory size: 8 bytes.
    // - Format specifier: %lf
    double largeDecimal = 12345.6789; // Declaring a double variable.

    // Format Specifiers
    // ------------------
    // Format specifiers are used with printf and scanf to specify the type of data being printed or read.
    // Common format specifiers:
    // - %d or %i: Integer
    // - %c: Character
    // - %f: Floating-point number
    // - %lf: Double
    // - %s: String

    // Example of Using Format Specifiers
    // -----------------------------------
    printf("This is the value of int: %d \n", a);          // Printing an integer value
    printf("This is the value of char: %c \n", initial);   // Printing a character value
    printf("This is the value of float: %.2f \n", cgpa);   // Printing a floating-point value with 2 decimal places
    printf("This is the value of double: %.4lf \n", largeDecimal); // Printing a double value with 4 decimal places

    // Special Notes on % and Format Specifiers
    // -----------------------------------------
    // 1. **%d**: Used to print integer values.
    //    Example: 
    //      int num = 10;
    //      printf("%d", num); // Output: 10

    // 2. **%c**: Used to print a single character.
    //    Example:
    //      char ch = 'A';
    //      printf("%c", ch); // Output: A

    // 3. **%f**: Used to print float values (single precision).
    //    Example:
    //      float pi = 3.14;
    //      printf("%f", pi); // Output: 3.140000

    // 4. **%lf**: Used to print double values (double precision).
    //    Example:
    //      double value = 12.3456;
    //      printf("%lf", value); // Output: 12.345600

    // 5. **%.2f**: Prints float values up to 2 decimal places.
    //    Example:
    //      float rate = 99.99;
    //      printf("%.2f", rate); // Output: 99.99

    return 0; // Indicates successful program termination.
}

// Summary of Output:
// -------------------
// This program demonstrates the use of basic data types and their format specifiers in C.
// Output:
// This is the value of int: 5
// This is the value of char: A
// This is the value of float: 9.50
// This is the value of double: 12345.6789
