#include<stdio.h>

void main(){
float n1,n2,n3;


printf("ENTER THE NUM1>> ");
scanf("%f",&n1);
printf("ENTER THE NUM2 >> ");
scanf("%f",&n2);
printf("ENTER THE NUM3 >> ");
scanf("%f",&n3);

if(n1>n2&&n1>n3){
    printf("\nBIGGEST A >> %g",n1);
}
else if(n2>n1&&n2>n3){
    printf("\nBIGGEST B >> %g",n2);
}else{
    printf("\nBIGGEST C >> %g",n3);
}

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

//smallest
if(n1<n2&&n1<n3){
    printf("\nSMALLEST A >> %g",n1);
}
else if(n2<n1&&n2<n3){
    printf("\nSMALLEST B >> %g",n2);
}else{
    printf("\nSMALLEST C >> %g",n3);
}


}