#include<stdio.h>
#include<stdlib.h>

/*int main(void){
    int *p = NULL, *p1, x = 10;

    //printf("\n %d \n", *p);
    
    printf("\n %d \n", p);
    p = &x;
    printf("\n %d \n", *p);
    printf("\n %d \n", p);
    system("pause");
    return 0;
}*/

/*int main (void){
    int vet[5] = {1,2,3,4,5};
    int *p = vet;
    int i;
    for(i = 0; i<5; i++){
          printf("%d \n", vet[i]);
          printf("%d \n", p++);
          }
    system("pause");
    return 0;
}*/

int main(void){
    char letra = 'a';
    char *ptrChar = &letra;
    char **ptrPtrChar = &ptrChar;
    char ***ptrPtrPtrChar = &ptrPtrChar;
    
    printf("%c\n", ptrChar);
    printf("%c\n", ptrPtrChar);
    printf("%c\n", ***ptrPtrPtrChar);
    
    system("pause");
    return 0;
}
