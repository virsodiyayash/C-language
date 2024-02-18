#include<stdio.h>
void main(){
    int i,j,n;

    printf("Enter the length of array = ");
    scanf("%d",&n);

    int a[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the value of a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    
}