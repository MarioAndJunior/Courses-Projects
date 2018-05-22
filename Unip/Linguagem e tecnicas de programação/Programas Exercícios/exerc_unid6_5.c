#include<stdio.h>

void f2(int n){
     if(n==0){
             printf(" Zero ");
             }
     else{
             printf(" %d ",n);
             f2(n-1);
             }
     }
     
int main(){
    int a;
    printf("Digite um valor inteiro \n");
    scanf("%d", &a);
    f2(a);
    system("pause");
    return 0;
}
