#include<stdio.h>
void troca(int *a, int *b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
     }
     
int main(){
    int a=7,b=5;
    troca(&a,&b);
    printf("\n a=%d \n b=%d \n",a,b);
    system("pause");
    return 0;
}
