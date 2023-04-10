#include<stdio.h>

int mul(int x,int y);

void main(){
 int a,b;
 printf("ENTER 1st NUM >> ");
 scanf("%d",&a);
 printf("ENTER 2nd NUM >> ");
 scanf("%d",&b);

 printf("A X B = %d",mul(a,b));
}

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

int mul(int x,int y){
    return x*y;
}