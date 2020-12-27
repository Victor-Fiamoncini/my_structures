#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 20;
    double y = 30.22;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double sum = *pX + *pY;

    printf("Memory reference: %p | Memory value: %i\n", pX, *pX);
    printf("Memory reference: %p | Memory value: %f\n", pY, *pY);
    printf("Memory reference: %p | Memory value: %c\n", pZ, *pZ);
    printf("%f\n", sum);

    return EXIT_SUCCESS;
}
