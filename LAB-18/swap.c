#include<stdio.h>

void swap(int ,int);
void main(){
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("value of a = %d",a);
    printf("\nValue of b = %d",b);
}
