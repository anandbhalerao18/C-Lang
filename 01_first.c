]// Topic: Introductory C Code - "Hello World"
// -----------------------------------------
// This is the first basic C program used to understand the structure and boilerplate of a C program.
// The program prints "hello world" and "hello anand" to the console.

// Including Standard Input-Output Library
#include <stdio.h>
// ----------------------------------------
// `#include <stdio.h>` is a preprocessor directive that tells the compiler to include the Standard Input-Output library.
// This library provides functions like `printf` and `scanf` for input-output operations in C.

int main() {
    // The `main` Function
    // --------------------
    // - The `main` function is the entry point of any C program.
    // - When the program is executed, the code inside the `main` function is executed first.
    // - It is of type `int`, meaning it returns an integer value to the operating system upon termination.

    // Printing Text to the Console
    // ----------------------------
    // - `printf` is a standard library function used to display output to the console.
    // - Syntax: `printf("format string", optional_arguments);`
    // - The text inside the double quotes is displayed as is.

    printf("hello world"); // Prints "hello world" to the console
    // Explanation:
    // - Here, "hello world" is the text to be displayed.
    // - This line outputs the text to the console without moving to a new line afterward.

    printf("hello anand"); // Prints "hello anand" to the console
    // Explanation:
    // - The text "hello anand" is displayed immediately after "hello world" since there is no newline.

    // Return Statement
    // -----------------
    // - The `return` statement indicates the end of the `main` function.
    // - It also specifies the status of program execution.
    // - `return 0;` means the program executed successfully without errors.

    return 0; // Returns 0 to indicate successful program termination
}

// What Does a Boilerplate C Code Look Like? 
// -----------------------------------------
// A boilerplate C program typically includes:
// 1. **Header Files**:
//    - These are included at the beginning using `#include`.
//    - Example: `#include <stdio.h>` provides input-output functions.
// 2. **The `main` Function**:
//    - This is the starting point of the program.
//    - Code execution begins and ends here.
// 3. **Statements**:
//    - These are the lines of code inside the `main` function that perform specific tasks.
// 4. **Return Statement**:
//    - Indicates how the program terminates.
//    - `return 0;` usually indicates that the program executed without errors.

// Example Output:
// ----------------
// When you run this program, the output will look like this:
// hello worldhello anand
// Note: Both outputs appear on the same line because there is no newline character (`\n`) used.

// How to Modify the Output for Better Formatting:
// ------------------------------------------------
// To print each message on a new line, add the newline escape sequence (`\n`) in the `printf` statements:
// Example:
// printf("hello world\n");
// printf("hello anand\n");
//
// Modified Output:
// -----------------
// hello world
// hello anand
