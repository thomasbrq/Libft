
# Libft

The goal is to recode a number of functions from the standard C library, as well as other utility functions.

## Functions

| Function      | Description                                                                                                                                             |
|---------------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| ft_atoi       | This function allows to transform a string, representing an integer value, into a numerical value of type int.                                          |
| ft_bzero      | Write zero bytes in a byte block.                                                                                                                       |
| ft_caloc      | Allocates a block of memory by initializing all these bytes to the value 0.                                                                             |
| ft_isalnum    | This function allows to test if a character is alpha-numeric or not.                                                                                    |
| ft_isalpha    | This function allows to test if a character is alphabetical or not.                                                                                     |
| ft_isascii    | This function allows to test if a character is an ascii character or not.                                                                               |
| ft_isdigit    | This function allows to test if a character is a decimal number or not.                                                                                 |
| ft_isprint    | This function allows to test if a character is printable or not.                                                                                        |
| ft_itoa       | Converts an integer value to a null-terminated string.                                                                                                  |
| ft_memchr     | Search for the first occurrence of a value in a block of memory.                                                                                        |
| ft_memcmp     | This function allows to compare the content of two memory blocks.                                                                                       |
| ft_memcpy     | This function allows you to copy a memory block.                                                                                                        |
| ft_memmove    | This function allows you to copy a memory block to a new location.                                                                                      |
| ft_memset     | This function allows to fill a memory area, identified by its address and its size, with a specific value.                                              |
| ft_putchar_fd | This function writes a character to the file descriptor passed in parameter.                                                                            |
| ft_putendl_fd | This function writes a string to the given file descriptor followed by a line break.                                                                    |
| ft_putnbr_fd  | This function writes an integer to the given file descriptor.                                                                                           |
| ft_putstr_fd  | This function writes a string to the given file descriptor.                                                                                             |
| ft_split      | Allocates and returns an array of strings obtained by separating 's' with with the character 'c', used as delimiter.                                    |
| ft_strchr     | This function searches for the first occurrence of the character passed as the second parameter in the string specified via the first parameter.        |
| ft_strdup     | This function allows to duplicate a string.                                                                                                             |
| ft_striteri   | Apply the 'f' function to each character of the string passed as argument, and passing its index as first argument.                                     |
| ft_strjoin    | Allows and returns a new string, result of the concatenation of s1 and s2.                                                                              |
| ft_strlcat    | This function allows to concatenate to an already existing string the content of a second one.                                                          |
| ft_strlcpy    | This function allows to copy the content of a string into another one.                                                                                  |
| ft_strlen     | This function calculates the length, expressed in number of characters, of the string.                                                                  |
| ft_strmapi    | Apply the 'f' function to each character of the string passed in argument to create a new string.                                                       |
| ft_strncmp    | This function allows to compare two strings and to know if the first one is inferior, equal or superior to the second one.                              |
| ft_strnstr    | This function searches for the first occurrence of a substring                                                                                          |
| ft_strrchr    | This function searches for the last occurrence of the character passed as the second parameter in the string specified via the first parameter.         |
| ft_strtrim    | Allocates and returns a copy of string 's1', without the characters specified in specified in 'set' at the beginning and end of the string. characters. |
| ft_substr     | Allocates and returns a string from the string 's'.                                                                                                     |
| ft_tolower    | This function allows you to convert an upper case letter to a lower case letter.                                                                        |
| ft_toupper    | This function allows you to convert a lowercase letter into an uppercase letter.    
| get_next_line    | This function reads a file and returns line by line.                                                                        |
| ft_printf    | This function reproduces the behavior of some flags of the real printf function.                                                                        |

## How to use
![Compile with macos](https://badgen.net/badge/build/macOS/grey?icon=apple)

Clone the project

```bash
  git clone https://github.com/thomasbrq/Libft.git
```

Go to the project directory

```bash
  cd Libft
```

Build the library

```bash
  make
```

Then include 'libft.h' in your project and compile it with 'libft.a'

## The Norm
This project was realized following [the standard 42](https://raw.githubusercontent.com/42Paris/norminette-v3/master/pdf/en.norm.pdf). 

## Authors

- [@thomasbrq](https://github.com/thomasbrq)
