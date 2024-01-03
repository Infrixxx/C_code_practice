 **# README #**

**This repository contains a collection of C functions for string manipulation and character testing, organized into a static library named `liball.a`.**

**Key Files:**

- **`liball.a`:** The static library containing the compiled C functions.
- **`main.h`:** The header file with function prototypes for using the library.
- **`create_static_lib.sh`:** A Bash script to automate the creation of the library.

**Available Functions:**

- **Character testing:**
    - `_islower(int c)`
    - `_isalpha(int c)`
    - `_abs(int n)`
    - `_isupper(int c)`
    - `_isdigit(int c)`
- **String manipulation:**
    - `_strlen(char *s)`
    - `_puts(char *s)`
    - `_strcpy(char *dest, char *src)`
    - `_atoi(char *s)`
    - `_strcat(char *dest, char *src)`
    - `_strncat(char *dest, char *src, int n)`
    - `_strncpy(char *dest, char *src, int n)`
    - `_strcmp(char *s1, char *s2)`
    - `_memset(char *s, char b, unsigned int n)`
    - `_memcpy(char *dest, char *src, unsigned int n)`
    - `_strchr(char *s, char c)`
    - `_strspn(char *s, char *accept)`
    - `_strpbrk(char *s, char *accept)`
    - `_strstr(char *haystack, char *needle)`
- **Output:**
    - `_putchar(char c)`

**Using the Library:**

1. **Include the header file:**
   ```c
   #include "main.h"
   ```
2. **Compile your code with the library:**
   ```bash
   gcc your_program.c -L. -lall -o your_program
   ```

**Creating the Library (Optional):**

1. **Run the script:**
   ```bash
   ./create_static_lib.sh
   ```

**Additional Notes:**

- Some functions might be empty placeholders, awaiting implementation.
- For more detailed function descriptions, refer to C documentation or online resources.

