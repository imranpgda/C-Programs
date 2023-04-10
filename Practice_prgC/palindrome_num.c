#include<stdio.h>

void main(){
int n,temp,rem=0,sum=0;

printf("ENTER THE NUMBER >> ");
scanf("%d",&n);
temp = n;
while (temp!=0)
{
  rem = temp%10;
  temp = temp/10;
  sum = sum*10+rem;
}
if(sum==n){
  //CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda
  
    printf("THE GIVEN NUMBER IS A PALINDROME NUMBER >> %d",sum);

}else{
    printf("THE GIVEN NUMBER IS NOT A PALINDROME NUMBER >> %d",n);

}


}