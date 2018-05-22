#include<stdio.h>
#include<string.h>

int main(){
    printf("%d \n", strcmp("A", "A"));
    printf("%d \n", strcmp("A", "B"));
    printf("%d \n", strcmp("B", "A"));
    printf("%d \n", strcmp("C", "A"));
    system("pause");
    return 0;
}
