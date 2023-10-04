#include<stdio.h>

void main(){

    int a;
    printf("Enter an integer value");
    scanf("%d",&a);

    if(a & 1){
        printf("a is odd");
    }
    else{
        printf("a is even");
    }
}