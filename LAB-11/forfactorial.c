#include<stdio.h>
void main(){
    int n,i;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    
}