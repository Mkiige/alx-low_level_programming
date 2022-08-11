#ifndef LISTS_H
#define LISTS_H

<<<<<<< HEAD
/**
 * 
 * File: lists.h
 * Desc: Header file containing prototypes and definitions for all function  
 * and types written in the 0x12-more_singly_linked_lists directory.


=======
>>>>>>> 7ddc7d9f382cbe33deb8e0f64cf97dc1582e3df0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);
int _strlen(char *s);

#endif
