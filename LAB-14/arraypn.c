#include<stdio.h>
void main(){
    int i,n,pos=0,neg=0;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter an element of array [%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>=0){
            pos=pos+1;
        }
        else{
            neg=neg+1;
        }

    }
    printf("positive = %d\n",pos);
    printf("negative = %d\n",neg);
}