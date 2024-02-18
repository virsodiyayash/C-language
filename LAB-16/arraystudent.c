#include<stdio.h>
void main(){
    int i,j;
    int rno[5][4],marks[5][4];

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
        printf("Enter the student roll no rno[%d][%d]= ",i,j);
        scanf("%d",&rno[i][j]);
        printf("ENter the marks marks[%d][%d] = ",i,j);
        scanf("%d",&marks[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d\t",rno[i][j]);
            printf("%d",marks[i][j]);
            printf("\n");
        }
    }
}