#include<stdio.h>
void main(){
    int i=1,sum=0;

    while(i<=10){
        printf("\n%d",i*i);
        sum=sum+(i*i);
        i++;
    }
    printf("\n%d",sum);
}