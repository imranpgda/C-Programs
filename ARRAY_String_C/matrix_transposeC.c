#include<stdio.h>

void main(){
int r,c;

int A[10][10];
printf("ENTER THE VALUE OF ROW >> ");
scanf("%d",&r);
printf("ENTER THE VALUE OF COLUMN >> ");
scanf("%d",&c);

printf("ENTER THE VALUE OF MATRIX >> \n");
for(int i=0; i<r;i++){
    for(int j=0; j<c;j++){
        printf("ENTER THE [A] %d - %d element >> ",i+1,j+1);
        scanf("%d",&A[i][j]);
    }
    printf("\n");
}
//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda
printf("\n THE TRANSPOSE OF MATRIX IS >> \n");

for(int i=0; i<r;i++){
    for(int j=0; j<c;j++){
      printf("%d ",A[j][i]);
    }
    printf("\n");
}
}