#include<stdio.h>
#include<string.h>

void main(){
int a=4;
int c;
float b =4.0;
float d;
char S[20] = "HACKERRANK ";
char S2[100];
printf("INPUT INT >> ");
scanf("%d",&c);
printf("INPUT FLOAT >> ");
scanf("%f",&d);
printf("%d\n",a+c);
printf("%g\n",b+d);
scanf("%[^.]",S);
strcat(S,S2);
printf("%s",S);
}