
#include<stdio.h>

void main(){

int n,i,res=0;
int a=0,b=1;

printf("ENTER THE NUMBER >> ");
scanf("%d",&n);
printf("0 ");
for(i=2; i<=n-2; i++ ){

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

 res = a+b;
 b=a;
 a= res;
 printf("%d ",res);
}

}
