// Topic: Input in C Programming

#include <stdio.h> // Including the standard input-output header file

int main() {
    // What is Input in C?
    // --------------------
    // In C, input refers to the process of taking data from the user during program execution.
    // C provides functions like `scanf` to take user input.

    // Functions Used for Input in C:
    // -------------------------------
    // 1. **`scanf`**:
    //    - Reads formatted input from the standard input (usually the keyboard).
    //    - Syntax: `scanf("format_specifiers", &variables);`
    //    - Example: To read an integer: `scanf("%d", &x);`
    // 2. **`getchar`**:
    //    - Reads a single character.
    //    - Syntax: `char c = getchar();`
    // 3. **`gets`** (Not recommended due to buffer overflow issues):
    //    - Reads a string from the input until a newline is encountered.

    // Example: Using `scanf` for Input
    // ----------------------------------
    int a; // Declare an integer variable
    float b; // Declare a float variable
    char c; // Declare a character variable

    // Prompting the user for input
    printf("Enter an integer: "); // Asking the user to input an integer
    scanf("%d", &a); // Reading the integer and storing it in 'a'

    printf("Enter a float: "); // Asking the user to input a float
    scanf("%f", &b); // Reading the float and storing it in 'b'

    printf("Enter a character: "); // Asking the user to input a character
    scanf(" %c", &c); // Reading the character and storing it in 'c'

    // Printing the input values
    printf("\nYou entered:\n");
    printf("Integer: %d\n", a); // Displaying the integer
    printf("Float: %.2f\n", b); // Displaying the float with two decimal places
    printf("Character: %c\n", c); // Displaying the character

    // Important Notes about `scanf`:
    // -------------------------------
    // 1. **Format Specifiers**:
    //    - `%d` for integers
    //    - `%f` for floats
    //    - `%c` for characters
    //    - `%s` for strings
    // 2. **Address-of Operator (`&`)**:
    //    - Required before variables to pass their address to `scanf`.
    //    - Example: `scanf("%d", &x);`
    // 3. **Space Before `%c`**:
    //    - A space before `%c` helps skip any newline character left in the input buffer.

    // Example: Using `getchar` for Single Character Input
    // ----------------------------------------------------
    char singleChar; // Declare a character variable
    printf("\nEnter a single character using getchar: ");
    singleChar = getchar(); // Reads a single character from input
    printf("You entered: %c\n", singleChar); // Displays the character

    return 0; // Indicates successful program termination
}

// Summary of Input in C:
// -----------------------
// - `scanf` is the primary function used for taking input in C.
// - Use format specifiers like `%d`, `%f`, and `%c` to specify the type of input.
// - Always use the `&` operator with `scanf` to pass the address of variables.
// - Use `getchar` for single-character input.
// - Properly handle input buffers, especially when mixing different types of input.

// Example Output:
// ----------------
// Enter an integer: 10
// Enter a float: 5.25
// Enter a character: A
//
// You entered:
// Integer: 10
// Float: 5.25
// Character: A
//
// Enter a single character using getchar: B
// You entered: B
