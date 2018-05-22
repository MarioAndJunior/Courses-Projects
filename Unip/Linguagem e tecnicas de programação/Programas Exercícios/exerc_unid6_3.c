#include<stdio.h>
#include<string.h>
int main(){
    char a[30], b[30];
    a = "abacate";
    b = "uva";
    if (strcmp(a,b) < 0){
                   printf("%s vem antes de %s no dicionario", a,b);
                   }
    else{
         printf("%s vem depois de %s no dicionario", a,b);
         }
         
    printf("\n");
    system("pause");
    return 0;
}
        
