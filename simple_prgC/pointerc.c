#include<stdio.h>

void main(){
int a=5,b=4;

int *p1 = &a;
int *p2 = &b;

printf("%d\n",&a);
printf("%d\n",p1); // address >> simple means > OUTER
printf("%d\n",*p1); // value >> *means > INTER 
printf("%d\n",&p2);
printf("%u\n",p2);
printf("%d\n",*p2);

}