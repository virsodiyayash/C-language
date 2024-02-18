#include<stdio.h>
void main(){
    int x,y,i,r=1,t;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);
   for(i=1;i<=y;i++){
    t=x;
    r=r*t;
   }
    printf("%d",r);
}