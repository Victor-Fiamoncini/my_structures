#include <stdio.h>
#include <stdlib.h>

#define STACK_LENGTH 5
#define EMPTY -1

struct IStack
{
  int values[STACK_LENGTH];
  int top;
};

typedef struct IStack Stack;

enum ReturnStatus
{
  SUCCESS = 1,
  FAILURE = 0,
};

int isEmpty(Stack *this)
{
  if (this->top == EMPTY)
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

int push(Stack *this, int value)
{
  if (!isFull(this))
  {
    this->top++;
    this->values[this->top] = value;
  }
  else
  {
    printf("Stack is full");
  }
}

int pop(Stack *this)
{
  if (!isEmpty(this))
  {
    int topElement = peek(this);
    this->top--;

    return topElement;
  }
  else
  {
    printf("Stack is empty");
  }
}

Stack *makeNewStack()
{
  Stack *this;
  this = malloc(sizeof(Stack));
  this->top = EMPTY;

  return this;
}

int main()
{
  Stack *this;
  this = makeNewStack();

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

    printf("%d\n", element);
  }

  return EXIT_SUCCESS;
}
