// Topic: Rules for Variables in C

#include<stdio.h> // Including standard input-output header file

int main() {
    // What are Variables in C?
    // -------------------------
    // Variables in C are used to store data that can change during the execution of a program.
    // Each variable in C has a name, a type, and a value.

    // Rules for Naming Variables
    // ---------------------------
    // 1. **Must Begin with a Letter or Underscore (_):**
    //    The first character of a variable name must be an alphabet (a-z, A-Z) or an underscore (_).
    //    Example:
    int valid_name;  // Correct
    // int 1name;    // Incorrect, cannot start with a digit.

    // 2. **No Special Characters Allowed:**
    //    Only letters, digits, and underscores (_) are allowed in a variable name.
    //    Example:
    int value_1;  // Correct
    // int value@; // Incorrect, special characters like '@' are not allowed.

    // 3. **Cannot Be a Reserved Keyword:**
    //    Variable names cannot be one of the reserved keywords in C.
    //    Example:
    // int int;    // Incorrect, 'int' is a reserved keyword.
    int variable;  // Correct

    // 4. **Case-Sensitive:**
    //    Variable names in C are case-sensitive. 'Value' and 'value' are treated as two different variables.
    //    Example:
    int age = 20;      // Variable 'age'
    int Age = 25;      // Variable 'Age', different from 'age'

    // 5. **No Space Allowed in Variable Names:**
    //    Variable names must not contain spaces.
    //    Example:
    // int my value; // Incorrect, spaces are not allowed.
    int my_value;     // Correct

    // 6. **Length Limitations:**
    //    While there is no strict length limit in C, overly long names can make the code less readable.
    //    It's good practice to use concise yet meaningful names.

    // 7. **Descriptive Names:**
    //    Use meaningful names to make your code more understandable.
    //    Example:
    int roll_number;   // Correct, descriptive name
    int x;             // Less meaningful, avoid single-character names unless in specific cases.

    // Declaring Variables Using Best Practices
    // -----------------------------------------
    // 1. Use camelCase for variable names:
    int mobileNumber;  // Example of camelCase
    // 2. Use underscores for separation if preferred:
    int personal_number; // Example of underscore naming style

    // Examples of Correct Variable Declarations
    // -----------------------------------------
    int MobileNumber;       // Correct, starts with an uppercase letter
    int Personal_Number;    // Correct, uses an underscore for clarity
    int rollNumber;         // Correct, uses camelCase for better readability

    // Why Follow Rules for Variables?
    // -------------------------------
    // 1. Ensures the code is syntactically correct and compiles successfully.
    // 2. Helps maintain readability and organization in the code.
    // 3. Prevents confusion and errors during program execution.

    return 0; // Indicates successful termination of the program.
}

// Summary:
// ---------
// The above code demonstrates the rules for naming variables in C, with examples of correct and incorrect practices.
// Following these rules ensures that the code is clean, readable, and error-free.
