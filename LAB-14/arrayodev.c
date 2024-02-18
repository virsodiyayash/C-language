#include<stdio.h>
void main(){
    int i,n,even=0,odd=0;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter an element of array [%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }

    }
    printf("even = %d\n",even);
    printf("odd = %d\n",odd);
}