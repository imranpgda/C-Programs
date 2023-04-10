#include<stdio.h>

int funarm(int x);
void main(){
int n,temp,rem=0,sum=0;

printf("ENTER THE NUMBER >> ");
scanf("%d",&n);
if(funarm(n)==1){
    printf("THE GIVEN NUMBER IS AN ARMSTRONG NUMBER >> %d",n);
}
if(funarm(n)==0){
    printf("THE GIVEN NUMBER IS NOT AN ARMSTRONG NUMBER >> %d",n);
}


// below written code is in simple code ;
//temp = n;
// while(temp!=0){
//     rem = temp%10;
//     sum=sum+rem*rem*rem;
//     temp = temp/10;
// }
// if(sum==n){
//     printf("THE GIVEN NUMBER IS AN ARMSTRONG NUMBER >> %d",n);
// }else{
//      printf("THE GIVEN NUMBER IS NOT AN ARMSTRONG NUMBER >> %d",n);
// }

// below written code is in function form 

}
int funarm(int x){
int temp,rem=0,sum=0;
temp=x;
while(temp!=0){
    rem = temp%10;
    sum=sum+rem*rem*rem;
    temp = temp/10;
}
if(sum==x){
   return 1;
}else{
     return 0;
}
}