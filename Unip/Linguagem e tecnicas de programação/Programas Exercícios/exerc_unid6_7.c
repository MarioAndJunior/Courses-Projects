#include<stdio.h>

int func(int n){
    if(n == 0){
           return 0;
           }
    else{
           return(3*n + func(n-1));
           }
}

int main(){
    int a, b;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    b = func(a);
    printf("%d \n", b);
    system("pause");
    return 0;
}
