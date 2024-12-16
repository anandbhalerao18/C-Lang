// Topic: Escape Sequence Characters in C

#include <stdio.h> // Including the standard input-output header file

int main() {
    // What are Escape Sequence Characters?
    // -------------------------------------
    // Escape sequence characters are special character combinations that begin with a backslash (`\`) in C.
    // They are used to represent characters that are difficult or impossible to express directly in source code.
    // Example: Newline, tab, or backslash itself.

    // Why Use Escape Sequence Characters?
    // -------------------------------------
    // 1. To format output or manage special cases in strings.
    // 2. To include non-printable characters in a program.

    // Commonly Used Escape Sequence Characters in C:
    // -----------------------------------------------
    /*
     Escape Sequence   Meaning
     ----------------   --------------------------------------
     \n                Newline
     \t                Horizontal Tab
     \r                Carriage Return
     \b                Backspace
     \f                Form Feed
     \'                Single Quote
     \"                Double Quote
     \\                Backslash
     \0                Null Character
    */

    // Examples of Escape Sequence Characters
    // ---------------------------------------
    printf("Example of \\n: \nThis text is on a new line.\n"); // Newline
    printf("Example of \\t: \tThis text is indented with a tab.\n"); // Tab
    printf("Example of \\r: This text will be replaced\rReplaced.\n"); // Carriage Return
    printf("Example of \\b: This removes\b the last character.\n"); // Backspace
    printf("Example of \\f: This text is followed by a form feed.\fNew Page.\n"); // Form Feed
    printf("Example of \\': This is a single quote: \'\n"); // Single Quote
    printf("Example of \\\": This is a double quote: \"\n"); // Double Quote
    printf("Example of \\\\: This is a backslash: \\\n"); // Backslash
    printf("Example of \\0: This text ends here\0 This text will not appear.\n"); // Null Character

    // Explanation of Each Escape Sequence
    // -------------------------------------
    // 1. `\n` - Moves the cursor to the next line.
    // 2. `\t` - Adds a horizontal tab space.
    // 3. `\r` - Moves the cursor to the beginning of the current line (overwriting content).
    // 4. `\b` - Moves the cursor back by one character, effectively removing it.
    // 5. `\f` - Advances the paper feed in a printer or creates a page break.
    // 6. `\'` - Allows including a single quote within single-quoted strings.
    // 7. `\"` - Allows including double quotes within double-quoted strings.
    // 8. `\\` - Represents a single backslash.
    // 9. `\0` - Null character, used to indicate the end of a string in C.

    // Practical Usage Example
    // ------------------------
    printf("\nPractical Usage Example:\n");
    printf("Name:\tJohn Doe\n"); // Using tab for alignment
    printf("Age:\t25\n");
    printf("Address:\n123, Example Lane\nCity, State, 12345\n"); // Using newline for multiple lines

    // Summary:
    // --------
    // Escape sequences enhance the flexibility of C programs, especially for formatting output and handling special cases.
    // By understanding these characters, you can control text alignment, include special symbols, or manage input and output effectively.

    return 0; // Indicates successful program termination
}

// Example Output:
// ----------------
// Example of \n: 
// This text is on a new line.
// Example of \t:    This text is indented with a tab.
// Example of \r: Replaced.
// Example of \b: This removes the last character.
// Example of \f: This text is followed by a form feed.
// New Page.
// Example of \': This is a single quote: '
// Example of \": This is a double quote: "
// Example of \\: This is a backslash: \
// Example of \0: This text ends here
//
// Practical Usage Example:
// Name:   John Doe
// Age:    25
// Address:
// 123, Example Lane
// City, State, 12345
