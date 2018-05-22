#include<stdio.h>

int fatorial(int n){
    
    int i, fat;
    
    fat=1;
    for(i=1;1<=n;i++){
                      fat*=i;
                      }
    return fat;
}

int main(){
    int a,b;
    float combinacao;
    printf("Entre com os numeros a serem combinados \n");
    scanf("%d", &a);
    scanf("%d", &b);
   combinacao = fatorial(a)/(fatorial(b)*fatorial(a-b));
    printf("\n A combinacao de %d e %d eh %10.2f \n",a,b, combinacao);
    //system("pause");
    return 0;
}
