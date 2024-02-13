// Find the sum and average of different numbers which are accepted by user as many as user wants


#include<stdio.h>
void main(){
    int n,i=1,num,sum=0,avg=0;
    printf("Enter the total number given by user");
    scanf("%d",&n);

    while(i<=n){
        printf("enter the number");
        scanf("%d",&num);
        sum=sum+num;
        i++;
    }
    avg=sum/n;
    printf("%d",avg);
    


}