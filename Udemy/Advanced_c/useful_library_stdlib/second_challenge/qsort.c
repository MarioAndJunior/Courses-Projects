#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define ARRAY_MAX 20
void fillArray(double array[], int size);
void displayArray(double array[], int size);
int compare(const void* first, const void* second);
int main(int argc, char const *argv[])
{
    double array[ARRAY_MAX] = {0};

    fillArray(array, ARRAY_MAX);
    displayArray(array, ARRAY_MAX);
    qsort(&array, ARRAY_MAX, sizeof(double), compare);
    printf("Depois de ordenado:\n");
    displayArray(array, ARRAY_MAX);
    return 0;
}

void fillArray(double array[], int size)
{
    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        array[i] = (rand() * 9.99 - 1) / (double)RAND_MAX;
    }
}
void displayArray(double array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Array %d = %f\n", i, array[i]);
    }
}

int compare(const void* first, const void* second)
{
    if(*(double*) first < *(double*) second)
    {
        return  -1;
    }
    else if(*(double*) first > *(double*) second)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}