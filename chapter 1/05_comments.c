// Topic: Comments in C Programming

#include <stdio.h> // Including the standard input-output header file

int main() {
    // What are Comments in C?
    // ------------------------
    // Comments are non-executable statements in a C program that are ignored by the compiler.
    // They are used to explain the code, provide documentation, or make the code more readable for others (or yourself).

    // Why Use Comments?
    // -------------------
    // 1. **Improves Readability**: Makes the code easier to understand.
    // 2. **Explains Logic**: Helps others (or yourself) understand the purpose of complex code.
    // 3. **Debugging Aid**: Comments can temporarily disable parts of code during debugging.

    // Types of Comments in C:
    // ------------------------
    // 1. **Single-line Comments**: Begin with `//` and continue to the end of the line.
    // 2. **Multi-line Comments**: Begin with `/*` and end with `*/`. Used for longer explanations.

    // Examples of Single-line Comments
    // ---------------------------------
    int a = 5; // Declaring an integer variable and assigning it the value 5
    int b = 10; // Another integer variable initialized to 10

    // Calculating the sum of 'a' and 'b'
    int sum = a + b; // Storing the result in the variable 'sum'

    // Printing the sum
    printf("The sum of %d and %d is %d\n", a, b, sum); // Displaying the result

    // Examples of Multi-line Comments
    // --------------------------------
    /*
     Multi-line comments are useful for explaining complex parts of code,
     providing additional details, or disabling large sections of code.
    */

    /* Example:
       This code snippet calculates the difference between two numbers.
       The result is stored in a variable called 'difference'.
    */
    int difference = b - a; // Subtracting 'a' from 'b'
    printf("The difference between %d and %d is %d\n", b, a, difference);

    // Comments for Documentation
    // ----------------------------
    /*
      This program demonstrates the use of comments in C.
      It covers:
      1. Single-line comments
      2. Multi-line comments
      3. Purpose of comments
    */

    // Practical Tips for Using Comments
    // -----------------------------------
    // 1. Avoid overusing comments; write self-explanatory code.
    //    Example: Instead of commenting "Add two numbers," name the function `addNumbers`.
    // 2. Use comments to explain the "why" behind code, not just the "what."
    // 3. Keep comments updated if the code changes.
    // 4. Use comments for complex logic or algorithms.

    return 0; // Indicating successful program termination
}

// Summary of Comments:
// ----------------------
// - Single-line comments start with `//` and are ideal for brief notes.
// - Multi-line comments are enclosed between `/*` and `*/`, suitable for longer explanations.
// - Comments do not affect the program's execution but improve readability and maintainability.

// Example Output:
// The sum of 5 and 10 is 15
// The difference between 10 and 5 is 5
