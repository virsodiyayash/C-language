#include<stdio.h>
void main(){
    int i,j,n;

    printf("Enter the length of array n = ");
    scanf("%d",&n);

    int a[n][n],b[n][n],c[n][n];

    
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
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the value of b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
            printf("\n");
        }
        printf("-------------");
        printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);

        }
        printf("\n");
    }
}