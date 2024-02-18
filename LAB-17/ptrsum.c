#include<stdio.h>
void main(){
    int a,b,c,*p,*q;

    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    p=&a;
    q=&b;
    
    printf("%d",(*p)+(*q));
}