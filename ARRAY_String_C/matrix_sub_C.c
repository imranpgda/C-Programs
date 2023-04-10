#include<stdio.h>

void main(){
int r,c;

int A[10][10] ,B[10][10],sub[10][10];
printf("ENTER THE VALUE OF ROW >> ");
scanf("%d",&r);
printf("ENTER THE VALUE OF COLUMN >> ");
scanf("%d",&c);

printf("ENTER THE VALUE OF 1st MATRIX >> \n");
for(int i=0; i<r;i++){
    for(int j=0; j<c;j++){
        printf("ENTER THE [A] %d - %d element >> ",i+1,j+1);
        scanf("%d",&A[i][j]);
    }
    printf("\n");
}
printf("ENTER THE VALUE OF 2nd MATRIX >> \n");
for(int i=0; i<r;i++){
    for(int j=0; j<c;j++){
        printf("ENTER THE [B] %d - %d element>> ",i+1,j+1);
        scanf("%d",&B[i][j]);
    }
    printf("\n");
}

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

printf("THE SUB OF MATRIXES IS >> ");

for(int i=0; i<r;i++){
    for(int j=0; j<c;j++){
      sub[i][j]=A[i][j]-B[i][j];
      printf("%d ",sub[i][j]);
    }
    printf("\n");
}
}