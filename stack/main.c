#include <stdio.h>
#include <stdlib.h>

#include "_stack.h"

int isEmpty(Stack *this)
{
  if (this->top == STACK_EMPTY)
    return SUCCESS;

  return FAILURE;
}

int isFull(Stack *this)
{
  if (this->top == STACK_LENGTH)
    return SUCCESS;

  return FAILURE;
}

int peek(Stack *this)
{
  if (!isEmpty(this))
    return this->values[this->top];
}

void push(Stack *this, int value)
{
  if (!isFull(this))
  {
    this->top++;
    this->values[this->top] = value;

    return;
  }

  printf("Stack is full");
}

int pop(Stack *this)
{
  if (!isEmpty(this))
  {
    int topElement = peek(this);
    this->top--;

    return topElement;
  }

  printf("Stack is empty");
}

Stack *newStack()
{
  Stack *this;
  this = malloc(sizeof(Stack));
  this->top = STACK_EMPTY;

  return this;
}

int main()
{
  Stack *this = newStack();

  push(this, 10);
  push(this, 11);
  push(this, 12);
  push(this, 13);
  pop(this);
  pop(this);
  push(this, 11);

  while (!isEmpty(this))
  {
    int element = pop(this);

    printf("Stack element: %d\n", element);
  }

  return EXIT_SUCCESS;
}
