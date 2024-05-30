#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);

int test_ft_lstnew() {
    int data = 42;
    t_list *new_node = ft_lstnew(&data);

    if (new_node == NULL) {
        printf("Error: Memory allocation failed\n");
        return (1);
    }

    if (new_node->content != &data) {
        printf("Error: Content pointer mismatch\n");
        return (1);
    }

    if (new_node->next != NULL) {
        printf("Error: next pointer not NULL\n");
        return (1);
    }

    printf("Test 1 Passed: New node created successfully\n");
    free(new_node); // Free the allocated memory
    return (0);
}