// Topic: Understanding Variables in C

#include <stdio.h> // Including standard input-output header for basic I/O operations

int main() {
    // What is a Variable?
    // ---------------------
    // In C, a variable is a named memory location used to store data.
    // Each variable has:
    // 1. A type: Determines the kind of data it can hold (e.g., int, float, char).
    // 2. A name: The identifier used to access the variable.
    // 3. A value: The actual data stored in the variable.

    // Declaring a Variable
    // ---------------------
    // Syntax: <data_type> <variable_name>;
    // Example:
    int a; // 'a' is declared as an integer variable.

    // Assigning a Value to a Variable
    // --------------------------------
    // Syntax: <variable_name> = <value>;
    // Example:
    a = 6; // Assigning the value 6 to the variable 'a'.

    // Printing the Value of a Variable
    // ---------------------------------
    // Syntax: printf("Format Specifier", variable_name);
    // Example:
    // %d is the format specifier for integers.
    printf("The output of the program is %d \n", a);

    // Why Use Variables?
    // -------------------
    // 1. Variables make programs dynamic and flexible.
    // 2. They allow us to store and manipulate data during program execution.
    // 3. Variables enable code reusability and maintainability.

    // Rules for Naming Variables
    // ---------------------------
    // 1. Variable names must begin with a letter or underscore (_).
    // 2. They can contain letters, digits, and underscores.
    // 3. They are case-sensitive (e.g., 'age' and 'Age' are different variables).
    // 4. Reserved keywords in C cannot be used as variable names.

    return 0; // Indicates successful program termination.
}

// Example Explanation:
// ---------------------
// 1. We declare an integer variable 'a'.
// 2. We assign the value 6 to 'a'.
// 3. We use the printf function to print the value of 'a' with the format specifier %d.

// Output of the Program:
// -----------------------
// The output of the program is 6
