#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value of a");
    scanf("%d",&a);

    b=(a%2==0)?printf("a is even"):printf("a is odd");

}