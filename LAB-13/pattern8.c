#include<stdio.h>
void main(){
    int i,j,n=5,ch=65;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%2c", ch);
                ch++;
            }
            else{
                printf("%2d", j);
            }
        }
        printf("\n");
    }
}