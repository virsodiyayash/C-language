// Print given number in reverse orde

#include<stdio.h>
void main(){
    int a,temp=0,rem=0,n,digit;

    printf("Enter the number = ");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        temp=(temp*10)+digit;
        n=n/10;
    }
    n=temp;

    printf("%d",temp);
}