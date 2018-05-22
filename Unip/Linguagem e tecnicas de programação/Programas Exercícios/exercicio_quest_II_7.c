#include <stdio.h>

void main(){
int a = 15;
int b = 3;
int c;
b+=a;
c = b;
b = 2;
printf("%d %d \n", a, b);
a=b++;
printf("%d %d \n", a, b);
}
