#include<stdio.h>
void main(){
    int i,j,n,p=0,n1=0,z=0;

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

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                

                if(a[i][j]>0){
                    p++;
                }
                else if(a[i][j]<0){
                    n1++;
                }
                else{
                    z++;
                }
            }
        }
        printf("positive numbers are %d\n",p);
        printf("negative numbers are %d\n",n1);
        printf("zero numbers are %d\n",z);
    
}