#include<stdio.h>
void main(){
    int n,i=2;

    printf("Enter the number = ");
    scanf("%d",&n);

    while(i<=n/2){
        if(n%i==0){
            printf("number is not prime");
        }
        else{
            printf("number is prime");
        }
        i++;    
    }
}