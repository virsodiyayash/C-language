#include<stdio.h>
void main(){
    int i,n;
    printf("Enter the value of n = " );
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter an array element arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    
}