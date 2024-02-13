// Find out sum of first and last digit of a given number.



#include<stdio.h>
void main(){
    int sum=0,n,a,b;
    printf("Enter the number = ");
    scanf("%d",&n);

    a=n%10;

    while(n>=9){
        n=n/10;
    }
    b=n;

    printf("%d+%d=%d",a,b,a+b);

    
}