#include<stdio.h>
void main(){
    int day;
    printf("Enter day 1 to 7");
    scanf("%d",&day);

    switch(day){
        case 1:printf("\n monday");
        break;
        case 2:printf("\n tuesday");
        break;
        case 3:printf("\n wednesday");
        break;
        case 4:printf("\n thursday");
        break;
        case 5:printf("\n friday");
        break;
        case 6:printf("\n saturday");
        break;
        case 7:printf("\n sunday");
        break;
    }
}