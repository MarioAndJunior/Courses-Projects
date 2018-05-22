#include<stdio.h>

int main(){
    char c;
    printf("\nDigite uma frase\n");
    do{
                     c = getchar();
                     if(c >=97 && c <=122){
                          c -= 32;
                          }
                     putchar(c);
                     } while(c != '\n');
    system("pause");
    return 0;
}
                     
