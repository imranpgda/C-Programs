#include<stdio.h>

void main(){
int n;
printf("ENTER THE NUMBER OF ROWS >> ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        if(i%2==0){
            printf("%d ",j);
        }else{
            char ch = (j+64);
            printf("%c ",ch);
        }
    }
    printf("\n");
}
for(int i=n-1; i>=1; i--){
    for(int j=1; j<=i; j++){
        if(i%2==0){
             char ch = (j+64);
            printf("%c ",ch);
        }else{
            printf("%d ",j);
           
        }
    }
    printf("\n");
}
}