#include<stdio.h>
#include<string.h>

int main(){
    char cadeia1[100], cadeia2[50];
    puts("Digite String1: ");
    gets(cadeia1);
    puts("Digite String2: ");
    gets(cadeia2);
    strcat(cadeia1, cadeia2);
    puts(cadeia1);
    system("pause");
    return 0;
}
