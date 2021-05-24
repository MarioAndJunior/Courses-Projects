#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int retornaComMaisDez(int num)
{
    return num + 10;
}

void aumentaDez(int *num)
{
    *num = *num + 10;
}

int main(void)
{
    int a = 0;

    printf("\n%d", a);

    a = retornaComMaisDez(a);

    printf("\n%d", a);

    aumentaDez(&a);

    printf("\n%d", a);

    return 0;
}
