#include<stdio.h>

void main(){
    float a,b,c,d,e,p;
    printf("Enter the marks");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    p = (a+b+c+d+e)/5;
    if(p<35){
        printf("fail");
    }
    else if(p>=35 && p<=45){
        printf("pass class");
    }
    else if(p>45 && p<=60){
        printf("second class");
    }
    else if(p>60 && p<=70){
        printf("first class");
    }
    else if(p>70){
        printf("distinction");
    }
}