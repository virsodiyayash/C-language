#include<stdio.h>

void main(){
    int a=10,*p;
    p=&a;
    printf("value of a =%d\t value of *p =%d\t adress of a =%d",a,*p,p);
}