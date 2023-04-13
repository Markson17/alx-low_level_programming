#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H



/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @next: Pointer to the next node
 * @index: Index of the node in the list
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
    size_t index;
} listint_t;

listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);


#endif /* SEARCH_ALGOS_H */