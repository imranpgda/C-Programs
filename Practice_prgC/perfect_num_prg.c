#include<stdio.h>


int fact(int x);

void main(){
int x;
printf("ENTER THE NUMBER >> ");
scanf("%d",&x);

printf("THE FACT IS %d ",fact(x));

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

}
int fact(int x){

if(x==1){
return 1;
}else{
return x*fact(x-1);
}
}
