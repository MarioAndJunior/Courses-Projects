#include <stdio.h>

void main(){
int a = 3;
int b = 15;
b/=a;
printf("%d %d \n", a, b);
a=b++;
printf("%d %d \n", a, b);
}
