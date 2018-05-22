#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    int *p;
    a=5;
    p= &a;
    *p=6;
    printf("\n%d\n",a);
    printf("%d",sizeof(int));
    system("pause");
    return 0;
}
