#include<stdio.h>
    
void swap(int ,int );
void main(){
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);

    swap(a,b); 
}

void swap(int a,int b){
    int temp,*p,*q;
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;


    printf("value of a = %d",a);
    printf("value of b = %d",b);

    




}

