#include<stdio.h>

void main(){
    int BS;
    float HRA,DA,TS;
    printf("Enter the salary");
    scanf("%d",&BS);
    
    if(BS>=10000 && BS<20000){
        printf("%f",HRA=BS*20/100);
        printf("\n%f",DA=BS*80/100);
        printf("\n%f",TS=BS+HRA+DA);
        
    }
    else if(BS>=20000 && BS<30000){
        printf("%f",HRA=BS*25/100);
        printf("\n%f",DA=BS*90/100);
        printf("\n%f",TS=BS+HRA+DA);
    }
    else if(BS>=30000){
        printf("%f",HRA=BS*30/100);
        printf("\n%f",DA=BS*95/100);
        printf("\n%f",TS=BS+HRA+DA);
    }
}