#include<stdio.h>
void main(){
    int a,b,n,i;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);

    if(a<b){
        i=a;
    }
    else{
        i=b;
    }
    while(i<b || i<a){
        if(i%2==0){
            printf("\neven numbers between given two numbers = %d",i);
        }
        i++;
    }
}