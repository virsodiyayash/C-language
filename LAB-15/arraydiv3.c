#include<stdio.h>
void main(){
    int i,n,m,count=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
   
    int a[n],b[n];

    for(i=0;i<n;i++){
        printf("enter the value of a[%d]",i);
        scanf("%d",&a[i]);

       
    }
    for(i=0;i<n;i++){
         if(a[i]%3==0){
        
            count++;
        }
    }
    printf("\n%d",count);
    
    
    }