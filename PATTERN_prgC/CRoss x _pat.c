
#include<stdio.h>

void main(){

int n,i,j;

printf("ENTER THE NUMBER OF ROWS >> ");
scanf("%d",&n);

for(i=0; i<=n; i++){

for(j=0; j<=n; j++){
//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

if(i==j || i+j==n)
{
printf("*");}
else{
printf("-");}

}
printf("\n");
}

}
