#include <stdio.h>

void main(){
int a = 15;
int b = 3;
b/=a;
printf("%d %d \n", a, b);
a=b++;
printf("%d %d \n", a, b);
}
