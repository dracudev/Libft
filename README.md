# Libft - Custom Static C Library

This repository contains a custom static library called Libft, which provides various utility functions for string manipulation, memory management, and character handling in C.

## Functions Overview

### Linked List Functions

#### [`ft_lstnew.c`](ft_lstnew.c)
- **Description:** Creates a new node for a linked list.
- **Prototype:** `t_list *ft_lstnew(void *content);`
- **Usage Example:**
  t_list *node = ft_lstnew(data);

#### [`ft_lstadd_front.c`](ft_lstadd_front.c)
- **Description:** Adds a new node at the beginning of a linked list.
- **Prototype:** `void ft_lstadd_front(t_list **lst, t_list *new_node);`
- **Usage Example:**
  ft_lstadd_front(&head, new_node);


### String Functions

### Character Handling Functions

### Memory Management Functions

### I/O Functions

### Other Utility Functions

## Usage
