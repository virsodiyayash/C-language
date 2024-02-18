#include<stdio.h>
void main(){
    int i,n,sum=0,c;
    printf("Enter the length of an array n = ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter an element of an array [%d]",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    c=sum/n;
    printf("\n%d",c);

    for(i=0;i<n;i++){
        if(c<arr[i]){
            printf("\n%d",arr[i]);
        }
    }

}