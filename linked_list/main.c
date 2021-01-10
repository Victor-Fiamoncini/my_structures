#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

void print_linked_list(linked_list_node *head)
{
    linked_list_node *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->value);
        current = current->next;
    }
}

void push(linked_list_node *head, int value_to_add)
{
    linked_list_node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = malloc(sizeof(linked_list_node));
    current->next->value = value_to_add;
    current->next->next = NULL;
}

void unshift(linked_list_node **head, int value_to_add)
{
    linked_list_node *new_item = malloc(sizeof(linked_list_node));

    new_item->value = value_to_add;
    new_item->next = *head;

    *head = new_item;
}


int shift(linked_list_node **head)
{
    if (*head == NULL)
        return 1;

    linked_list_node *next_item = (*head)->next;

    free(*head);

    *head = next_item;

    return 0;
}

int pop(linked_list_node *head)
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

int main()
{
    linked_list_node *head = malloc(sizeof(linked_list_node));

    head->value = 111;
    head->next = NULL;

    push(head, 156);
    push(head, 122);
    unshift(&head, 10);
    shift(&head);
    pop(head);

    print_linked_list(head);

    return EXIT_SUCCESS;
}
