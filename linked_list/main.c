#include <stdio.h>
#include <stdlib.h>

#include "_linked_list.h"

void push(LinkedList *this, int valueToAdd)
{
  LinkedList *currentListNode = this;

  while (currentListNode->next != NULL)
    currentListNode = currentListNode->next;

  currentListNode->next = malloc(sizeof(LinkedList));
  currentListNode->next->value = valueToAdd;
  currentListNode->next->next = NULL;
}

void unshift(LinkedList **this, int valueToAdd)
{
  LinkedList *newLinkedList = malloc(sizeof(LinkedList));

  newLinkedList->value = valueToAdd;
  newLinkedList->next = *this;

  *this = newLinkedList;
}

int shift(LinkedList **this)
{
  if (*this == NULL)
    return FAILURE;

  LinkedList *nextItem = (*this)->next;

  free(*this);

  *this = nextItem;

  return SUCCESS;
}

int pop(LinkedList *this)
{
  if (this->next == NULL)
  {
    free(this);
    return SUCCESS;
  }

  LinkedList *currentListNode = this;

  while (currentListNode->next->next != NULL)
    currentListNode = currentListNode->next;

  free(currentListNode->next);
  currentListNode->next = NULL;

  return SUCCESS;
}

int main()
{
  LinkedList *this = malloc(sizeof(LinkedList));

  push(this, 156);
  push(this, 232);
  push(this, 444);
  unshift(&this, 10);
  pop(this);
  shift(&this);

  while (this != NULL)
  {
    printf("%d\n", this->value);
    this = this->next;
  }

  return EXIT_SUCCESS;
}
