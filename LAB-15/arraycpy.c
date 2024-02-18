#include<stdio.h>
void main(){
    int i,n,m;
    printf("Enter the value of n = ");
    scanf("%d",&n);
   
    int a[n],b[n];

    for(i=0;i<n;i++){
        printf("enter the value of a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[i]=a[i];
        printf("%d",b[i]);
    }
}