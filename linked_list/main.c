#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

void printList(Node *head)
{
    Node *currentNode = head;

    while (currentNode != NULL)
    {
        printf("%d\n", currentNode->value);
        currentNode = currentNode->next;
    }
}

void push(Node *head, int value_to_add)
{
    Node *currentNode = head;

    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }

    currentNode->next = malloc(sizeof(Node));
    currentNode->next->value = value_to_add;
    currentNode->next->next = NULL;
}

void unshift(Node **head, int value_to_add)
{
    Node *new_item = malloc(sizeof(Node));

    new_item->value = value_to_add;
    new_item->next = *head;

    *head = new_item;
}


int shift(Node **head)
{
    if (*head == NULL)
        return 1;

    Node *next_item = (*head)->next;

    free(*head);

    *head = next_item;

    return 0;
}

int pop(Node *head)
{
    if (head->next == NULL)
    {
        free(head);
        return 0;
    }

    Node *currentNode = head;

    while (currentNode->next->next != NULL)
    {
        currentNode = currentNode->next;
    }

    free(currentNode->next);
    currentNode->next = NULL;

    return 0;
}

int main()
{
    Node *head = malloc(sizeof(Node));

    push(head, 156);
    push(head, 122);
    unshift(&head, 10);
    shift(&head);
    pop(head);

    printList(head);

    return EXIT_SUCCESS;
}
