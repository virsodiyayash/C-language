#include<stdio.h>
void main(){
    int a,b,perform,c;
    printf("Enter the value of a & b");
    scanf("%d %d",&a,&b);
    scanf("%d",&perform);

    switch(perform){
        case 1:printf("%d",c=a+b);
        break;
        
        case 2:printf("%d",c=a-b);
        break;
        
        case 3:printf("%d",c=a*b);
        break;
        case 4:printf("%d",c=a/b);
        break;

    }
}