#include<stdio.h>

void main(){
    int a,b;
    char c;
    printf("Enter the value of a & b");
    scanf("%d %d",&a,&b);
    printf("Enter the character");
    scanf(" %c",&c);

    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else {
        printf("%d",a/b);
    }
}