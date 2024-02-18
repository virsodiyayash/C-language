#include<stdio.h>
void main(){
    int i,n,max=0,min,sum=0,avg=0,temp=0;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter the element of array [%d] = ",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        avg=(sum)/n;
        
    }
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    min=max;
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("sum is = %d\n",sum);
    printf("average is = %d\n",avg);
    printf("Max is = %d\n",max);
    printf("Min is = %d\n",min);

        


        }
    
    