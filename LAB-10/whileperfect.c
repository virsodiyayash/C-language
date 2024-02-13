// Check whether the given number is perfect or not.

#include<stdio.h>
void main(){
    int n,a,i=1,count=0;
    printf("Enter the number = ");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            
            count=count+i;
            
        }
        i++;
        }
         if(count==n){
            printf("number is perfect");

        }
        else{
            printf("number is not perfect");
    }
       
        
        

}