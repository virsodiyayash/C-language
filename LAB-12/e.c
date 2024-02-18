#include<stdio.h>
void main(){
    int i,j,n;
    float sum=1,div=1;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        div=1;
        for(j=1;j<=i;j++){
            div*=j;
        }
        sum=sum+(1.0/div);
    }
    printf("%f",sum);
}