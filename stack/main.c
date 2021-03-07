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

int isEmpty()
{
  if (top == EMPTY) return SUCCESS;

  return FAILURE;
}

int isFull()
{
  if (top == STACK_LENGTH) return SUCCESS;

  return FAILURE;
}

int peek()
{
  if (!isEmpty())
  {
    return ages[top];
  }
}

int push(int value)
{
  if (!isFull())
  {
    top++;
    ages[top] = value;
  }
  else
  {
    printf("Stack is full");
  }
}

int pop()
{
  if (!isEmpty())
  {
    int topElement = peek();
    top--;

    return topElement;
  }
  else
  {
    printf("Stack is empty");
  }
}

int main()
{
  push(10);
  push(11);
  push(12);
  push(13);

  pop();
  pop();
  pop();
  pop();
  pop();

  while(!isEmpty())
  {
    int element = pop();

    printf("%d\n", element);
  }

  return EXIT_SUCCESS;
}
