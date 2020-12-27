#include <stdio.h>
#include <stdlib.h>

typedef struct int_value_node
{
    int value;
    struct int_value_node *next;
} linked_list_node;

void print_linked_list(linked_list_node *head);
void add_value_to_the_end(linked_list_node *head, int valueToAdd);
void add_value_to_the_beginning(linked_list_node *head, int valueToAdd);

int main()
{
    linked_list_node *head = malloc(sizeof(linked_list_node));

    head->value = 23;

    head->next = malloc(sizeof(linked_list_node));
    head->next->value = 14;

    head->next->next = malloc(sizeof(linked_list_node));
    head->next->next->value = 72;

    add_value_to_the_end(head, 66);

    print_linked_list(head);

    return EXIT_SUCCESS;
}

void print_linked_list(linked_list_node *head)
{
    linked_list_node *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->value);
        current = current->next;
    }
}

void add_value_to_the_end(linked_list_node *head, int valueToAdd)
{
    linked_list_node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->value = valueToAdd;
    current->next = malloc(sizeof(linked_list_node));
    current->next = NULL;
}

void add_value_to_the_beginning(linked_list_node *head, int valueToAdd)
{
    linked_list_node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->value = valueToAdd;
    current->next = malloc(sizeof(linked_list_node));
    current->next = NULL;
}

