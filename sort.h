#ifndef SORT_H
# define SORT_H

# include <stdio.h>
# include <stdlib.h>

/* Data structures */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 *
 * Description: Doubly linked list node structure
 * for Holberton project
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Function prototypes */
void	print_array(const int *array, size_t size);
void	print_list(const listint_t *list);

/* Mandatory tasks */
void	bubble_sort(int *array, size_t size);
void	insertion_sort_list(listint_t **list);
#endif /* SORT_H */
