#include<stdio.h>

float arr(float,float,float);

void main(){
    float a,b,c;

    float res=arr(a,b,c);
    printf("%f",res);
}

float arr(float a,float b,float c){
    float max;
    printf("Enter the value of a = ");
    scanf("%f",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    printf("Enter the value of c = ");
    scanf("%f",&c);

    max=(a>b)?((a>c)?a:c):((b>c?b:c));
    return max;
}