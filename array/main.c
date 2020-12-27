#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ages[] = {13, 24, 54, 33, 81};
    int agesLength =  sizeof(ages) / sizeof(int);

    for (int i = 0; i < agesLength; i++)
        printf("Age stored in index %i == %i\n", i, ages[i]);

    return 0;
}
