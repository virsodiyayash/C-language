#include<stdio.h>

void main(){
    int a,r;
    printf("Enter an integer value");
    scanf("%d",&a);

    if(r==a%10 && r%2==0){
        printf("Last digit of number is even");
    }
    else {
        printf("Last digit of number is odd");
    }
        
}