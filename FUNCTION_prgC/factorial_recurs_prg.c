#include<stdio.h>

int fact(int x); // func prototype // we can also write our func code here

void main(int x){         //argument passing // also we can declare it normally
printf("ENTER THE NUM >> ");
scanf("%d",&x);
printf("THE FACT IS %d ",fact(x));  // function call by name .. fact(x)
}


int fact(int x){   // func define // with argument
int fc=1;         // temp variable
while(x!=0)       // while loop
{
fc=fc*x;         // logic factorial
x--;
}

x=fc;      // value defining in given argument
return x;   // returning the value for external use
}

/*int fact(int x){

if(x>=1){
return x*fact(x-1);     function self call ;; RECURSION
}else{
return 1;
}

}*/


//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda