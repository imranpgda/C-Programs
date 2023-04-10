#include<stdio.h>

void main(){
 
int n,rem,sum=0;
printf("ENTER THE NUMBER >> ");
scanf("%d",&n);

while(n!=0){
    rem = n%10;
    n=n/10;
  sum = sum+rem;  // calculating the sum
  int t =rem;    // temporary variable
  printf("%d + ",t);  // printing the number for OUTPUT 
}
 printf("= %d",sum);  // printing The sum

//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

}