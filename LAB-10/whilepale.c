#include<stdio.h>
void main(){
    int n,rem,sum=0,a;

    printf("Enter the number = ");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(a==sum){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
}