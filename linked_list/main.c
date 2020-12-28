#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "linked_list.h"

int main()
{
    linked_list_node *head = malloc(sizeof(linked_list_node));

    populate_linked_list(head, 3);

    add_item_to_the_end(head, 156);

    print_linked_list(head);

    return EXIT_SUCCESS;
}

void populate_linked_list(linked_list_node *head, int number_of_items)
{
    linked_list_node *current = head;

    for (int i = 0; i < number_of_items; i++)
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

void add_item_to_the_end(linked_list_node *head, int value_to_add)
{
    linked_list_node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->value = value_to_add;
    current->next = malloc(sizeof(linked_list_node));
    current->next = NULL;
}

void add_item_to_the_beginning(linked_list_node **head, int value_to_add)
{
    linked_list_node *new_item = malloc(sizeof(linked_list_node));

    new_item->value = value_to_add;
    new_item->next = *head;

    *head = new_item;
}


int remove_item_of_the_beginning(linked_list_node **head)
{
    if (*head == NULL)
    {
        return 1;
    }

    linked_list_node *next_item = (*head)->next;

    free(*head);

    *head = next_item;

    return 0;
}

int remove_item_of_the_end(linked_list_node *head)
{
    if (head->next == NULL)
    {
        free(head);
        return 0;
    }

    linked_list_node *current = head;

    while (current->next->next != NULL)
    {
        current = current->next;
    }

    free(current->next);
    current->next = NULL;

    return 0;
}

int remove_item_by_index(linked_list_node **head, int index_to_remove) {}

int remove_item_by_value(linked_list_node **head, int value_to_remove) {}
