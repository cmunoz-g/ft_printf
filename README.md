# 🖨️ ft_printf

## Introduction
The **ft_printf** project is a reimplementation of the standard C library function `printf()`. This project provides a custom `ft_printf()` function, which can be integrated into future projects as part of the custom library `libft`.

## Project Description
The `ft_printf()` function mimics the behavior of the original `printf()` function, supporting multiple conversion specifiers and flags. It handles variable arguments and formats the output based on the specified conversions. The function is designed to be modular and extensible, allowing for easy integration.

### Supported Conversions
- **%c**: Prints a single character.
- **%s**: Prints a string.
- **%p**: Prints a pointer in hexadecimal format.
- **%d**: Prints a decimal (base 10) integer.
- **%i**: Prints an integer in base 10.
- **%u**: Prints an unsigned decimal (base 10) number.
- **%x**: Prints a number in lowercase hexadecimal (base 16).
- **%X**: Prints a number in uppercase hexadecimal (base 16).
- **%%**: Prints a literal '%' character.

## Installation and Usage
1. **Clone the Repository**:
    ```bash
    git clone https://github.com/cmunoz-g/printf.git
    ```
2. **Navigate to the Project Directory**:
    ```bash
    cd printf
    ```
3. **Compile the Library**:
    ```bash
    make
    ```
4. **Link and Use in Your Code**:
    Include the header file and link the library in your project:
    ```c
    #include "ft_printf.h"
    ...
    ft_printf("Hello, %s!\n", "world");
    ```
    Compile your project with `libftprintf.a`:
    ```bash
    gcc main.c -L. -lftprintf -o my_program
    ```

## Implementation Details
- **Variadic Functions**: The project uses variadic functions (`va_start`, `va_arg`, and `va_end`) to handle an indefinite number of arguments passed to `ft_printf()`.
- **Modular Design**: The implementation is broken down into multiple functions for handling different conversions and formatting options, making the code easier to maintain and extend.
- **Memory Management**: Proper handling of dynamically allocated memory to avoid leaks.
