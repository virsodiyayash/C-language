#include<stdio.h>

int add(int a,int b);

void main(){
    int ans;

    ans=add(5,6);
    printf("%d",ans);
}

int add(int a,int b){
    int c;
    c=a+b;
    
    return c;
}