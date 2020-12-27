#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "linked_list_helpers.h"

int main()
{
    linked_list_node *head = malloc(sizeof(linked_list_node));

    populate_linked_list(head, 6);

    add_value_to_the_end(head, 10);

    print_linked_list(head);

    return EXIT_SUCCESS;
}

void populate_linked_list(linked_list_node *head, int numberOfNodes)
{
    linked_list_node *current = head;

    for (size_t i = 0; i < numberOfNodes; i++)
    {
        if (current != NULL)
        {
            current->value = rand();
            current->next = malloc(sizeof(linked_list_node));
        }

        current = current->next;
    }
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

void add_value_to_the_beginning(linked_list_node *head, int valueToAdd) {}
