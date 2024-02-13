#include<stdio.h>
void main(){
    int x,y,i=1,r=1,t;

    scanf("%d",&x);
    scanf("%d",&y);
    while(i<=y){
        t=x;
        r=r*t;
        i++;
    }
    printf("%d",r);
}