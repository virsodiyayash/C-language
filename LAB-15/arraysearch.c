#include<stdio.h>
void main(){
    int i,n,m;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("enter the value of a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the number whose use wants to find = ");
    scanf("%d",&m);

    for(i=0;i<n;i++){
        if(a[i]==m){
            printf("%d",i);
        }
    }
}