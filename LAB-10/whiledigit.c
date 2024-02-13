// Print digits of given number

#include<stdio.h>
void main(){
    int n,rem=0,a,count=0;
    printf("Enter the number = ");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        if(n!=0){
            count++;
        }
        
        n=n/10;
       
    }
   printf("%d",count);
}