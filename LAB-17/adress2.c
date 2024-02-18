#include<stdio.h>

void main(){
    int a,*p;
    float b,*q;
    char c,*r;
    double d,*s;

    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    printf("Enter the value of d = ");
    scanf("%lf",&d);
    printf("Enter the value of c = ");
    scanf(" %c",&c);
    

    p=&a;
    q=&b;
    r=&c;
    s=&d;

    printf("value of a =%d\t value of *p =%d\t adress of a =%d",a,*p,p);
    printf("value of b =%f\t value of *q =%f\t adress of b =%d",b,*q,q);
    printf("value of c =%c\t value of *r =%c\t adress of d =%d",c,*r,r);
    printf("value of d =%lf\t value of *s =%lf\t adress of c =%d",d,*s,s);


}