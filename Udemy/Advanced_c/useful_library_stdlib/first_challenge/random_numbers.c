#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    srand(time(NULL));

    printf("Will generate 50 random numbers:\n");

    for(int i = 0; i < 50; i++)
    {
        printf("%f\n", ((rand() % 11) + (-5.0)) / 10);
    }
    return 0;
}
