#include<stdio.h>

void main(){
int sumf(int x,int y);
int a,b,sum;
    printf("ENTER THE VALUE OF A >> ");
    scanf("%d",&a);
      printf("ENTER THE VALUE OF A >> ");
    scanf("%d",&b);

sum=sumf(a,b);
    printf("THE SUM A+B >> %d",sum);
}

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

int sumf(int x,int y){   //u d func defintion {body}
    return(x+y);
}