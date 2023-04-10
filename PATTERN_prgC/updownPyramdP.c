#include<stdio.h>
void main(){
int n;
printf("ENTER THE NUM >> ");
scanf("%d",&n);

for(int i=n; i>=1; i--){
    for(int j=n; j>=i; j--){
        printf(" ");
    }
    for(int j=1; j<=i; j++){
        if(j==i){
            printf("*");
        }else{printf("**");
        }
     }
    
 printf("\n");   
}
//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda
for(int i=2; i<=n; i++){
    for(int j=n; j>=i; j--){
        printf(" ");
    }
    for(int j=1; j<=i; j++){
        if(j==i){
            printf("*");
        }else{printf("**");
        }
     }
    
 printf("\n");   
}

}

