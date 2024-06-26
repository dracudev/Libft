# Libft - Custom Static C Library

This repository contains a custom static library wich provdes various utility functions for string manipulation, memory management, character handling, file operations, and linked list implementations in C.

## Usage

1. **Clone the Repository:**

   Clone the `libft` repository into your project directory.

   ```bash
   git clone https://github.com/yourusername/libft.git

2. **Compile libft**

   To compile libft, navigate into the libft directory and run make. This will compile all the source files and create the libft.a library file.

   ```bash
   cd libft
   make
   
3. **Link libft with Your Project:**

   To use libft in your own project, include the header file libft.h in your source files, and link your project with libft.a.

   ```bash
   #include "libft.h"
   ```
   
   When compiling your project, ensure to link with libft.a. For example:

   ```bash
   gcc -o my_program my_program.c -L. -lft -I.

## Function Index

1. [Character Handling](#character-handling)
2. [String Manipulation](#string-manipulation)
3. [Memory Management](#memory-management)
4. [File Operations](#file-operations)
5. [Linked List](#linked-list)

## Character Handling

#### [`ft_isalpha.c`](ft_isalpha.c)
- **Description:** Checks if the given character is an alphabetic letter.
- **Prototype:** `int ft_isalpha(int c);`
- **Usage Example:**
  ```c
  if (ft_isalpha('a')) {
      // Do something if 'a' is an alphabetic character
  }
  
<br>

#### [`ft_isdigit.c`](ft_isdigit.c)
- **Description:** Checks if the given character is a digit (0-9).
- **Prototype:** `int ft_isdigit(int c);`
- **Usage Example:**
  ```c
  if (ft_isdigit('5')) {
      // Do something if '5' is a digit
  }
    
<br>

#### [`ft_isalnum.c`](ft_isalnum.c)
- **Description:** Checks if the given character is alphanumeric (a letter or a digit).
- **Prototype:** `int ft_isalnum(int c);`
- **Usage Example:**
  ```c
  if (ft_isalnum('a')) {
      // Do something if 'a' is an alphanumeric character
  }
  
<br>

#### [`ft_isascii.c`](ft_isascii.c)
- **Description:** Checks if the given character is an ASCII character (0-127).
- **Prototype:** `int ft_isascii(int c);`
- **Usage Example:**
  ```c
  if (ft_isascii(65)) {
      // Do something if 65 is an ASCII character
  }
    
<br>

#### [`ft_isprint.c`](ft_isprint.c)
- **Description:** Checks if the given character is a printable character, including space.
- **Prototype:** `int ft_isprint(int c);`
- **Usage Example:**
  ```c
  if (ft_isprint(' ')) {
      // Do something if ' ' is a printable character
  }
    
<br>

#### [`ft_toupper.c`](ft_toupper.c)
- **Description:** Converts a lowercase letter to its corresponding uppercase letter.
- **Prototype:** `int ft_toupper(int c);`
- **Usage Example:**
  ```c
  char lowercase = 'a';
  char uppercase = ft_toupper(lowercase);
  // Now `uppercase` should contain 'A'
  
<br>

#### [`ft_tolower.c`](ft_tolower.c)
- **Description:** Converts an uppercase letter to its corresponding lowercase letter.
- **Prototype:** `int ft_tolower(int c);`
- **Usage Example:**
  ```c
  char uppercase = 'A';
  char lowercase = ft_tolower(uppercase);
  // Now `lowercase` should contain 'a'
  
<br>

## String Manipulation

#### [`ft_strchr.c`](ft_strchr.c)
- **Description:** Locates the first occurrence of a character in a string.
- **Prototype:** `char *ft_strchr(const char *s, int c);`
- **Usage Example:**
  ```c
  const char *str = "Hello, World!";
  char *ptr = ft_strchr(str, 'o');
  if (ptr != NULL) {
      printf("Found 'o' at position: %ld\n", ptr - str);
  } else {
      printf("Character 'o' not found.\n");
  }
  
<br>

#### [`ft_strrchr.c`](ft_strrchr.c)
- **Description:** Locates the last occurrence of a character in a string.
- **Prototype:** `char *ft_strrchr(const char *s, int c);`
- **Usage Example:**
  ```c
  const char *str = "Hello, World!";
  char *ptr = ft_strrchr(str, 'o');
  if (ptr != NULL) {
      printf("Found last 'o' at position: %ld\n", ptr - str);
  } else {
      printf("Character 'o' not found.\n");
  }
  
<br>

#### [`ft_strlen.c`](ft_strlen.c)
- **Description:** Computes the length of a string (not including the terminating null character).
- **Prototype:** `size_t ft_strlen(const char *s);`
- **Usage Example:**
  ```c
  const char *str = "Hello, World!";
  size_t length = ft_strlen(str);
  printf("Length of the string '%s' is %zu\n", str, length);
  
<br>

#### [`ft_strncmp.c`](ft_strncmp.c)
- **Description:** Compares two strings up to the first `n` characters.
- **Prototype:** `int ft_strncmp(const char *s1, const char *s2, size_t n);`
- **Usage Example:**
  ```c
  const char *str1 = "Hello";
  const char *str2 = "Hella";
  int result = ft_strncmp(str1, str2, 4);
  if (result == 0) {
      printf("First 4 characters of '%s' and '%s' are equal.\n", str1, str2);
  } else if (result < 0) {
      printf("First 4 characters of '%s' are less than '%s'.\n", str1, str2);
  } else {
      printf("First 4 characters of '%s' are greater than '%s'.\n", str1, str2);
  }
  
<br>

#### [`ft_strlcpy.c`](ft_strlcpy.c)
- **Description:** Copies a string from `src` to `dst` with a maximum size of `dsize`.
- **Prototype:** `size_t ft_strlcpy(char *dst, const char *src, size_t dsize);`
- **Usage Example:**
  ```c
  char dst[20];
  const char *src = "Hello, World!";
  size_t copied = ft_strlcpy(dst, src, sizeof(dst));
  printf("Copied '%zu' characters from '%s' to '%s'\n", copied, src, dst);
  
<br>

#### [`ft_strlcat.c`](ft_strlcat.c)
- **Description:** Concatenates a string from `src` to `dst` with a maximum size of `dsize`.
- **Prototype:** `size_t ft_strlcat(char *dst, const char *src, size_t dsize);`
- **Usage Example:**
  ```c
  char dst[20] = "Hello";
  const char *src = ", World!";
  size_t concatenated = ft_strlcat(dst, src, sizeof(dst));
  printf("Concatenated '%zu' characters: '%s'\n", concatenated, dst);
  
<br>

#### [`ft_strnstr.c`](ft_strnstr.c)
- **Description:** Locates the first occurrence of the substring `little` in the string `big`, where the search is limited to the first `len` characters of `big`.
- **Prototype:** `char *ft_strnstr(const char *big, const char *little, size_t len);`
- **Usage Example:**
  ```c
  const char *big = "Hello, World!";
  const char *little = "World";
  char *found = ft_strnstr(big, little, strlen(big));
  if (found != NULL) {
      printf("Found '%s' in '%s' starting at position: %ld\n", little, big, found - big);
  } else {
      printf("Substring '%s' not found in '%s'\n", little, big);
  }
  
<br>

#### [`ft_strdup.c`](ft_strdup.c)
- **Description:** Duplicates a string `s` by allocating memory for a copy and returning a pointer to it.
- **Prototype:** `char *ft_strdup(const char *s);`
- **Usage Example:**
  ```c
  const char *original = "Hello, World!";
  char *duplicate = ft_strdup(original);
  if (duplicate != NULL) {
      printf("Original string: %s\n", original);
      printf("Duplicate string: %s\n", duplicate);
      free(duplicate); // Free allocated memory when done
  } else {
      printf("Memory allocation failed.\n");
  }
  
<br>

#### [`ft_substr.c`](ft_substr.c)
- **Description:** Allocates and returns a substring from the string `s`, starting at index `start` and of maximum length `len`.
- **Prototype:** `char *ft_substr(const char *s, unsigned int start, size_t len);`
- **Usage Example:**
  ```c
  const char *str = "Hello, World!";
  char *substring = ft_substr(str, 7, 5);
  if (substring != NULL) {
      printf("Original string: %s\n", str);
      printf("Substring from index 7 with length 5: %s\n", substring);
      free(substring); // Free allocated memory when done
  } else {
      printf("Memory allocation failed.\n");
  }
  
<br>

#### [`ft_strjoin.c`](ft_strjoin.c)
- **Description:** Concatenates two strings `s1` and `s2` into a new string.
- **Prototype:** `char *ft_strjoin(const char *s1, const char *s2);`
- **Usage Example:**
  ```c
  const char *str1 = "Hello, ";
  const char *str2 = "World!";
  char *joined = ft_strjoin(str1, str2);
  if (joined != NULL) {
      printf("Joined string: %s\n", joined);
      free(joined); // Free allocated memory when done
  } else {
      printf("Memory allocation failed.\n");
  }
  
<br>

#### [`ft_strtrim.c`](ft_strtrim.c)
- **Description:** Allocates and returns a copy of the string `s1` with the characters specified in `set` removed from the beginning and the end of the string.
- **Prototype:** `char *ft_strtrim(const char *s1, const char *set);`
- **Usage Example:**
  ```c
  const char *str = "   Hello, World!   ";
  const char *set = " ";
  char *trimmed = ft_strtrim(str, set);
  if (trimmed != NULL) {
      printf("Original string: '%s'\n", str);
      printf("Trimmed string: '%s'\n", trimmed);
      free(trimmed); // Free allocated memory when done
  } else {
      printf("Memory allocation failed.\n");
  }
    
<br>

#### [`ft_split.c`](ft_split.c)
- **Description:** Splits the string `s` into an array of strings using the delimiter `c`.
- **Prototype:** `char **ft_split(char const *s, char c);`
- **Usage Example:**
  ```c
  const char *str = "Split,this,string";
  char delimiter = ',';
  char **split_strings = ft_split(str, delimiter);
  if (split_strings != NULL) {
      int i = 0;
      while (split_strings[i] != NULL) {
          printf("Split[%d]: %s\n", i, split_strings[i]);
          free(split_strings[i]);
          i++;
      }
      free(split_strings); // Free allocated memory when done
  } else {
      printf("Memory allocation failed.\n");
  }
  
<br>

#### [`ft_strmapi.c`](ft_strmapi.c)
- **Description:** Applies the function `f` to each character of the string `s` to create a new string.
- **Prototype:** `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- **Usage Example:**
  ```c
  // Example function to convert characters to uppercase
  char uppercase(unsigned int index, char c) {
      return (char)(c >= 'a' && c <= 'z' ? c - 32 : c);
  }

  const char *str = "hello";
  char *new_str = ft_strmapi(str, uppercase);
  if (new_str != NULL) {
      printf("Original string: %s\n", str);
      printf("Modified string: %s\n", new_str);
      free(new_str); // Free allocated memory when done
  } else {
      printf("Memory allocation failed.\n");
  }
  
<br>

#### [`ft_striteri.c`](ft_striteri.c)
- **Description:** Applies the function `f` to each character of the string `s`, passing its index as the first argument.
- **Prototype:** `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
- **Usage Example:**
  ```c
  // Example function to modify characters in place
  void modify_string(unsigned int index, char *c) {
      if (*c >= 'a' && *c <= 'z') {
          *c = *c - 32; // Convert to uppercase
      }
  }

  char str[] = "hello";
  ft_striteri(str, modify_string);
  printf("Modified string: %s\n", str);

<br>

## Memory Management

#### [`ft_memset.c`](ft_memset.c)
- **Description:** Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`.
- **Prototype:** `void *ft_memset(void *s, int c, size_t n);`
- **Usage Example:**
  ```c
  char buffer[10];
  ft_memset(buffer, 'A', sizeof(buffer));
  printf("Buffer after memset: %s\n", buffer); // Output: "AAAAAAAAAA"
  
<br>

#### [`ft_bzero.c`](ft_bzero.c)
- **Description:** Sets the first `n` bytes of the memory area pointed to by `s` to zero.
- **Prototype:** `void ft_bzero(void *s, size_t n);`
- **Usage Example:**
  ```c
  char buffer[10];
  ft_bzero(buffer, sizeof(buffer));
  printf("Buffer after bzero: %s\n", buffer); // Output: "\0\0\0\0\0\0\0\0\0\0"
  
<br>

#### [`ft_memcpy.c`](ft_memcpy.c)
- **Description:** Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas must not overlap.
- **Prototype:** `void *ft_memcpy(void *dest, const void *src, size_t n);`
- **Usage Example:**
  ```c
  char src[] = "Hello";
  char dest[10];
  ft_memcpy(dest, src, sizeof(src));
  printf("Copied string: %s\n", dest); // Output: "Hello"
  
<br>

#### [`ft_memmove.c`](ft_memmove.c)
- **Description:** Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas may overlap.
- **Prototype:** `void *ft_memmove(void *dest, const void *src, size_t n);`
- **Usage Example:**
  ```c
  char buffer[20] = "Hello, World!";
  ft_memmove(buffer + 7, buffer + 5, 7);
  printf("After memmove: %s\n", buffer); // Output: "Hello, World World!"
  
<br>

#### [`ft_memchr.c`](ft_memchr.c)
- **Description:** Locates the first occurrence of byte `c` in the first `n` bytes of the memory area pointed to by `s`.
- **Prototype:** `void *ft_memchr(const void *s, int c, size_t n);`
- **Usage Example:**
  ```c
  const char *str = "Hello, World!";
  char *found = ft_memchr(str, 'W', strlen(str));
  if (found != NULL) {
      printf("Found 'W' at position: %ld\n", found - str);
  } else {
      printf("Character 'W' not found.\n");
  }
  
<br>

#### [`ft_memcmp.c`](ft_memcmp.c)
- **Description:** Compares the first `n` bytes of memory areas `s1` and `s2`.
- **Prototype:** `int ft_memcmp(const void *s1, const void *s2, size_t n);`
- **Usage Example:**
  ```c
  const char *str1 = "Hello";
  const char *str2 = "Hella";
  int result = ft_memcmp(str1, str2, 4);
  if (result == 0) {
      printf("First 4 bytes of '%s' and '%s' are equal.\n", str1, str2);
  } else if (result < 0) {
      printf("First 4 bytes of '%s' are less than '%s'.\n", str1, str2);
  } else {
      printf("First 4 bytes of '%s' are greater than '%s'.\n", str1, str2);
  }
  
<br>

#### [`ft_calloc.c`](ft_calloc.c)
- **Description:** Allocates memory for an array of `count` elements each of size `size`, initialized to zero.
- **Prototype:** `void *ft_calloc(size_t count, size_t size);`
- **Usage Example:**
  ```c
  size_t num_elements = 5;
  size_t element_size = sizeof(int);
  int *array = ft_calloc(num_elements, element_size);
  if (array != NULL) {
      printf("Allocated memory for array of %zu elements\n", num_elements);
      // Use `array` as needed
      free(array); // Don't forget to free allocated memory
  } else {
      printf("Memory allocation failed.\n");
  }
  
<br>

## Other Utility

#### [`ft_atoi.c`](ft_atoi.c)
- **Description:** Converts a string `nptr` to an integer.
- **Prototype:** `int ft_atoi(const char *nptr);`
- **Usage Example:**
  ```c
  const char *str = "12345";
  int num = ft_atoi(str);
  printf("Converted string '%s' to integer: %d\n", str, num);
  
<br>

#### [`ft_itoa.c`](ft_itoa.c)
- **Description:** Converts an integer `n` into a null-terminated string representation.
- **Prototype:** `char *ft_itoa(int n);`
- **Usage Example:**
  ```c
  int num = 12345;
  char *str_num = ft_itoa(num);
  if (str_num != NULL) {
      printf("Integer %d as a string: %s\n", num, str_num);
      free(str_num); // Free allocated memory when done
  } else {
      printf("Memory allocation failed.\n");
  }

<br>

## File Operations

#### [`ft_putchar_fd.c`](ft_putchar_fd.c)
- **Description:** Writes the character `c` to the file descriptor `fd`.
- **Prototype:** `void ft_putchar_fd(char c, int fd);`
- **Usage Example:**
  ```c
  char ch = 'A';
  int fd = 1; // STDOUT_FILENO
  ft_putchar_fd(ch, fd);
  
<br>

#### [`ft_putstr_fd.c`](ft_putstr_fd.c)
- **Description:** Writes the string `s` to the file descriptor `fd`.
- **Prototype:** `void ft_putstr_fd(char *s, int fd);`
- **Usage Example:**
  ```c
  char *message = "Hello, World!";
  int fd = 1; // STDOUT_FILENO
  ft_putstr_fd(message, fd);
  
<br>

#### [`ft_putendl_fd.c`](ft_putendl_fd.c)
- **Description:** Writes the string `s` followed by a newline (`'\n'`) to the file descriptor `fd`.
- **Prototype:** `void ft_putendl_fd(char *s, int fd);`
- **Usage Example:**
  ```c
  char *message = "Hello, World!";
  int fd = 1; // STDOUT_FILENO
  ft_putendl_fd(message, fd);
  
<br>

#### [`ft_putnbr_fd.c`](ft_putnbr_fd.c)
- **Description:** Writes the integer `n` to the file descriptor `fd`.
- **Prototype:** `void ft_putnbr_fd(int n, int fd);`
- **Usage Example:**
  ```c
  int number = 12345;
  int fd = 1; // STDOUT_FILENO
  ft_putnbr_fd(number, fd);
  
<br>

## Linked List

#### [`ft_lstnew.c`](ft_lstnew.c)
- **Description:** Allocates and returns a new element for a linked list.
- **Prototype:** `t_list *ft_lstnew(void *content);`
- **Usage Example:**
  ```c
  void *data = "Example Data";
  t_list *new_node = ft_lstnew(data);
  if (new_node != NULL) {
      printf("New node created with content: %s\n", (char *)new_node->content);
      // Don't forget to free allocated memory when done using the node
      free(new_node);
  } else {
      printf("Memory allocation failed.\n");
  }
  
<br>

#### [`ft_lstadd_front.c`](ft_lstadd_front.c)
- **Description:** Adds the element `new_node` at the beginning of the linked list `lst`.
- **Prototype:** `void ft_lstadd_front(t_list **lst, t_list *new_node);`
- **Usage Example:**
  ```c
  void *data1 = "First Node";
  void *data2 = "Second Node";

  t_list *node1 = ft_lstnew(data1);
  t_list *node2 = ft_lstnew(data2);

  // Initialize the list pointer
  t_list *list = NULL;

  // Add node2 at the front of the list
  ft_lstadd_front(&list, node2);
  // Add node1 at the front of the list
  ft_lstadd_front(&list, node1);

  // Now list should have node1 -> node2

  // Traverse the list to print contents
  t_list *current = list;
  while (current != NULL) {
      printf("Node content: %s\n", (char *)current->content);
      current = current->next;
  }

  // Don't forget to free allocated memory when done using the list and nodes
  
<br>

#### [`ft_lstsize.c`](ft_lstsize.c)
- **Description:** Counts the number of elements in a linked list.
- **Prototype:** `int ft_lstsize(t_list *lst);`
- **Usage Example:**
  ```c
  t_list *head = NULL; // Initialize your linked list
  // Add elements to the linked list

  int size = ft_lstsize(head);
  printf("Size of the linked list: %d\n", size);
  
<br>

#### [`ft_lstlast.c`](ft_lstlast.c)
- **Description:** Returns the last element of a linked list.
- **Prototype:** `t_list *ft_lstlast(t_list *lst);`
- **Usage Example:**
  ```c 
  // Create a new node with some data
  void *data = "Example Data";
  t_list *new_node = ft_lstnew(data);

  // Add the new node to the linked list
  t_list *head = new_node;

  // Add more nodes to the linked list
  void *data2 = "Another Data";
  t_list *new_node2 = ft_lstnew(data2);
  new_node->next = new_node2;

  // Get the last node
  t_list *last_node = ft_lstlast(head);

  if (last_node != NULL) {
      printf("Last node content: %s\n", (char *)last_node->content);
  } else {
      printf("The linked list is empty.\n");
  }
  
<br>

#### [`ft_lstadd_back.c`](ft_lstadd_back.c)
- **Description:** Adds the element `new` at the end of the linked list `lst`.
- **Prototype:** `void ft_lstadd_back(t_list **lst, t_list *new);`
- **Usage Example:**
  ```c
  // Create nodes with some data
  void *data1 = "First Node";
  void *data2 = "Second Node";

  t_list *node1 = ft_lstnew(data1);
  t_list *node2 = ft_lstnew(data2);

  // Initialize the list pointer
  t_list *list = NULL;

  // Add node1 at the back of the list
  ft_lstadd_back(&list, node1);
  // Add node2 at the back of the list
  ft_lstadd_back(&list, node2);

  // Traverse the list to print contents
  t_list *current = list;
  while (current != NULL) {
      printf("Node content: %s\n", (char *)current->content);
      current = current->next;
  }
  
<br>

#### [`ft_lstdelone.c`](ft_lstdelone.c)
- **Description:** Deletes a single node from a linked list.
- **Prototype:** `void ft_lstdelone(t_list *lst, void (*del)(void *));`
- **Usage Example:**
  ```c
  // Delete the first node in the linked list
  if (my_list != NULL) {
      ft_lstdelone(my_list, free);
  } else {
      printf("The linked list is empty.\n");
  }
  
<br>

#### [`ft_lstclear.c`](ft_lstclear.c)
- **Description:** Deletes all nodes of a linked list and frees their memory.
- **Prototype:** `void ft_lstclear(t_list **lst, void (*del)(void *));`
- **Usage Example:**
  ```c
  // Clear the entire linked list
  ft_lstclear(&my_list, free);

  // After ft_lstclear, my_list should be NULL as all nodes are deleted

  // Don't forget to free allocated memory when done using the linked list pointer itself
  free(my_list); // Assuming my_list was allocated dynamically
  
<br>

#### [`ft_lstiter.c`](ft_lstiter.c)
- **Description:** Iterates over each element of a linked list and applies function `f` to each element.
- **Prototype:** `void ft_lstiter(t_list *lst, void (*f)(void *));`
- **Usage Example:**
  ```c
  // Function to print the content of a node
  void print_content(void *content) {
      printf("Node content: %s\n", (char *)content); // Assuming content is a string
  }

  // Iterate through the linked list and print each node's content
  ft_lstiter(my_list, print_content);

  // Don't forget to free allocated memory when done using the linked list
  ft_lstclear(my_list, free); // Function to free the linked list
  
<br>

#### [`ft_lstmap.c`](ft_lstmap.c)
- **Description:** Iterates over a linked list `lst`, applies function `f` to each element to create a new list, and returns the new list.
- **Prototype:** `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
- **Usage Example:**
  ```c
  // Function to duplicate the content of a node
  void *duplicate_content(void *content) {
      // Assuming content is dynamically allocated (e.g., string)
      char *duplicate = strdup((char *)content);
      return (void *)duplicate;
  }

  // Create a new linked list by duplicating each node's content
  t_list *new_list = ft_lstmap(my_list, duplicate_content, free);

  // Traverse the new list to print contents
  t_list *current = new_list;
  while (current != NULL) {
      printf("Node content: %s\n", (char *)current->content);
      current = current->next;
  }

  // Don't forget to free allocated memory when done using both the original and new linked lists
  ft_lstclear(my_list, free); // Function to free the original linked list
  ft_lstclear(new_list, free); // Function to free the new linked list


