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

void push(Node *head, int valueToAdd)
{
  Node *currentNode = head;

  while (currentNode->next != NULL)
  {
    currentNode = currentNode->next;
  }

  currentNode->next = malloc(sizeof(Node));
  currentNode->next->value = valueToAdd;
  currentNode->next->next = NULL;
}

void unshift(Node **head, int valueToAdd)
{
  Node *newItem = malloc(sizeof(Node));

  newItem->value = valueToAdd;
  newItem->next = *head;

  *head = newItem;
}


int shift(Node **head)
{
  if (*head == NULL)
    return 1;

  Node *nextItem = (*head)->next;

  free(*head);

  *head = nextItem;

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
