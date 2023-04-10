#include<stdio.h>

void main(){

int i,j,r,k;
printf("ENTER THE NUM >> ");
scanf("%d",&r);
printf("\n\n\n");

for(i=r; i>=1; i--){
for(j=1; j<=i; j++){
printf("* ");
}
printf("\n");
}
for(i=1; i<=r; i++){
for(j=r; j>=i; j--){
printf("  ");}
for(k=1; k<=i; k++){
printf("* ");
}

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

printf("\n");}

}
