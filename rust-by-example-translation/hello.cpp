#include <iostream>

// This is a comment, and is ignored by the compiler.

// This is the main function.
int main() {
    // Statements here are executed when the compiled binary is called.

    // Print text to the console.

    std::cout << "Hello World!" << std::endl; // The `!` does not indicate that a macro is being used.
    std::cout << "I'm a C++ Developer" << std::endl;

    return 0;
}

/* In C++, the std::cout is used for console output, and std::endl is used to insert a newline character. 
 * C++ provides a more feature-rich I/O stream library compared to C, and std::cout is part of it for printing to the console. 
 * The return 0; statement indicates successful program execution.
 */
