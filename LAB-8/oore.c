#include<stdio.h>
void main(){
    int a,odd=0,even=0,i=1;

    
    

while(i<=10){
    printf("Enter the number =");
    scanf("%d",&a);

    if(a%2==0){
        printf("Even numbers is = %d\n",a);
        even=even+1;
    }
   else if(a%2!=0){
        printf("odd numbers is = %d\n",a);
        odd=odd+1;
    }
    i++;
}





}