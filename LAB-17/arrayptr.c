#include<stdio.h>
void main(){
    int n,i;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    int a[n],*b[n];


    for(i=0;i<n;i++){
        printf("Enter an element of an array a[%d]",i);
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++){
        b[i]=&a[i];
        printf("%d",*b[i]);
    }
}