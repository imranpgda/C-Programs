#include<stdio.h>

void main(){

int n;
printf("ENTER THE NUM >> ");
scanf("%d",&n);


for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
        printf(" ");
    }
    for(int j=1; j<=i; j++){
        if(j==1){
            printf("*");
        }else{
        printf("**");
        }
    }
 printf("\n");   
}
//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

}

