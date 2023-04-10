#include<stdio.h>

int fact(int x);

void main(){

int n,nf;
printf("ENTER THE N >> ");
scanf("%d",&n);
int r,rf,nrf;
printf("ENTER THE R >> ");
scanf("%d",&r);
nf=fact(n);
printf("THE FACT OF N IS >> %d",nf);
rf=fact(r);
nrf=fact(n-r);
printf("\nTHE FACTORIAL OF R IS >> %d",rf);
int ncr=nf/(rf*(nrf));
printf("\nNCR OF %d %d IS << %d >>",n,r,ncr);
}
//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

//my custom function
int fact(int x){
if(x==1){
    return 1;
}else{
    return x*fact(x-1);
}
}