#include<stdio.h>
void main(){
    int a,c=1;
    printf("Enter the value of a=");
    scanf("%d",&a);

    while(c<=a){
    if(c%2==0){
        printf("\n%d",c);
    }
    c++;
}
}
