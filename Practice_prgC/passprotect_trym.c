
#include<stdio.h>
#include<windows.h>

void main(){
int pass,i=5;


printf("ENTER PASS >> ");
scanf("%d",&pass);
system("cls");

if(pass!=7518){

do {
printf("YOU HAVE %d TRY LEFT <>\n",i);
printf("WRONG PASS TRY AGAIN ! >> ");
scanf("%d",&pass);
system("cls");
i--;
if(pass==7518){
printf("WELCOME @ ROOT");
}
}while(pass!=7518 && i>=1);
}
else{
printf("WELCOME @ ROOT");
}
printf("\nxxxxx  YOU ARE LOGGED OUT xxxxx\n");

}
