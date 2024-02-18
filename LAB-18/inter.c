#include<stdio.h>

float interest(float,float,float);

void main(){
    float p,r,t;

    float res=interest(p,r,t);
    printf("%f",res);



}

float interest(float p,float r,float t){

    printf("Enter the value of p = ");
    scanf("%f",&p);
    printf("Enter the value of r = ");
    scanf("%f",&r);
    printf("Enter the value of t = ");
    scanf("%f",&t);



    return ((p*r*t)/100);

}

