#include<stdio.h>

    void arr(int , int);

    void main(){
        int a,b,max=0,min=0;
        arr(a,b);

    }

    void  arr(int a,int b){
        printf("Enter the value of a = ");
        scanf("%d",&a);
        printf("Enter the value of b = ");
        scanf("%d",&b);

        if(a>b){
            printf("Max is = %d",a);
            printf("\nMin is = %d",b);
        }
        else{
            printf("Max is = %d",b);
            printf("\nMin is = %d",a);
        }
        }
    
