#include <stdio.h>
#include <stdlib.h>

enum ReturnStatus
{
  SUCCESS = 1,
  FAILURE = 0,
};

#define STACK_LENGTH 5
#define EMPTY (-1)

int ages[STACK_LENGTH];
int top = EMPTY;

void printStack()
{
  for (int i = 0; i < STACK_LENGTH; i++)
  {
    printf("Age stored in index %i is %i\n", i, ages[i]);
  }
}

int isEmpty()
{
  if (top == EMPTY) return SUCCESS;

  return FAILURE;
}

int isFull()
{
  if (top == EMPTY) return SUCCESS;

  return FAILURE;
}


int peek()
{
  return ages[top];
}

int push(int value)
{
  if (top >= STACK_LENGTH - 1) return FAILURE;

  top++;
  ages[top] = value;

  return SUCCESS;
}

int pop()
{
  if (!isEmpty())
  {

  }

  return FAILURE;
}

int main()
{
  push(10);
  push(10);
  push(10);
  push(10);
  push(10);

  pop();
  pop();

  printStack();

  return EXIT_SUCCESS;
}
