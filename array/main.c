#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 5

void printArray(int (*array)[ARRAY_LENGTH])
{
  for (int i = 0; i < ARRAY_LENGTH; i++)
  {
    printf("Age stored in index %i is %i\n", i, (*array)[i]);
  }
}

void changeValue(int (*array)[ARRAY_LENGTH], int indexToAdd, int valueToAdd)
{
  (*array)[indexToAdd] = valueToAdd;
}

int main()
{
  int ages[ARRAY_LENGTH] = {13, 24, 54, 33, 81};

  changeValue(&ages, 2, 62);
  changeValue(&ages, 3, 4);

  printArray(&ages);

  return EXIT_SUCCESS;
}
