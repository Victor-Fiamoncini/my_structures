#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 10;
  int *pAge = &age;

  printf("Reference: %i | Value: %i", pAge, *pAge);

  return EXIT_SUCCESS;
}
