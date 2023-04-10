#include<stdio.h>

void main(){

int r,c,i,j;
printf("ENTER THE ROWS NUM >> ");
scanf("%d",&r);
printf("ENTER THE COLOMN NUM >> ");
scanf("%d",&c);

for(i=1; i<=r; i++){

for(j=1; j<=c; j++){
if(i==1 || i==r|| j==1 || j==c){

printf("* ");
}else{
printf("  ");
}
}
printf("\n");
}


}
