#include<stdio.h>
void main(){
    int i,j,n=9;
    for(i=1;i<=n;i++){
       for(j=9;j>=n-i;j--){
        printf(" ");
       }
       for(j=9;j>=i;j--){
        printf(" *");
       }
       printf("\n");
       }
       
    }
