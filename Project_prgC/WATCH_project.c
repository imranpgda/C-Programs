#include<stdio.h>
#include<windows.h>

void main(){

int h,m,s;

printf("ENTER THE HH : ");
scanf("%d",&h);
printf("ENTER THE MM : ");
scanf("%d",&m);
printf("ENTER THE SECOND : ");
scanf("%d",&s); 
int D=1000;
if(h>12 || m>60 || s>60){
printf("<< THE VALUES ENTERED IS NOT CORRECT >> \n <<<<< TRY AGAIN >>>>>");  // wrong input
exit (0);
}else{

while(1){
if(s>=60){
   m++;
   s=1;
}
 if(m>=60){
    h++;
    m=1;
   }
if(h>=12){
    h=1;
}
system("cls");
printf("%02d : %02d : %02d",h,m,s);
s++;
Sleep(D);
}
}

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda


}


