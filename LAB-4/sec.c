#include<stdio.h>

void main(){
    int H,M,S,seconds;
    printf("Enter the seconds");
    scanf("%d",&seconds);
    H=(seconds/3600);
    seconds=seconds-(H*3600);
    M=(seconds/60);


    seconds=seconds-(M*60);

    printf("%d %d %d",H,M,seconds);



}