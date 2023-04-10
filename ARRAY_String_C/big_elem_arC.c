#include<stdio.h>

void main(){
int arr[100];
int n,id;
printf("ENTER THE ARRAY LENGTH >> ");
scanf("%d",&n);

int max= -12312;
for(int i=0; i<n ; i++){
    printf("ENTER THE ELEMENT [%d] >> ",i);
    scanf("%d",&arr[i]);
    printf("\n");
if(arr[i]>max){
    max=arr[i];
    id=i;
}
//CODE BY @imranpgda  >>> connect me on INSTAGRAM .. @imranpgda

}

printf("THE BIGGEST ELEMENT IS %d <><> AT ARRAY INDEX [%d]",max,id);


}