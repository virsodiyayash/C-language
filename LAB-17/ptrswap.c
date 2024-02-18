#include<stdio.h>
void main(){
    int a,b,*p,*q,temp;

    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);

    p=&a;
    q=&b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("value of a is =%d",a);
    
    printf("\nvalue of b is =%d",b);

}
