#include<stdio.h>

void main(){

int n;
printf("ENTER THE NUM >> ");
scanf("%d",&n);


for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf("*");
    }
    for(int j=n-i; j>=1; j--){
        printf(" ");
    }
    for(int j=1; j<=n-i; j++){
        printf(" ");
    }
    for(int j=1; j<=i; j++){
        printf("*");
    }
 printf("\n");   
}
//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

for(int i=n-1; i>=1; i--){
    for(int j=1; j<=i; j++){
        printf("*");
    }
    for(int j=n-i; j>=1; j--){
        printf(" ");
    }
    for(int j=1; j<=n-i; j++){
        printf(" ");
    }
    for(int j=1; j<=i; j++){
        printf("*");
    }
 printf("\n");   
}

}

