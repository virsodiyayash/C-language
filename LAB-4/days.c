#include<stdio.h>

void main(){
    int Y,D,W,days;
    printf("Enter the days");
    scanf("%d",&days);

    Y=(days/365);
    days=days-(Y*365);
    W=(days/7);
    days=days-(W*7);

    printf("%d %d %d",Y,W,days);

}