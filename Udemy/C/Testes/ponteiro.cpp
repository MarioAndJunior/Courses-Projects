#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    int a = 20;

    printf("\n%d", a);
    printf("\n%d", &a);

    int *p;
    printf("\n%d\n", *p);
    p = &a;

    *p = 50;

    printf("\n%d\n", *p);
    printf("%d\n", a);
    printf("\n%d", &a);

    system("pause");
    return 0;
}
