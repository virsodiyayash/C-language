#include<stdio.h>

void main(){
    char c;
    printf("Enter any character");
    scanf(" %c",&c);

    if(c>=97 && c<=122){
        printf("lower case");
    }
    else if(c>=65 && c<=90){
        printf("upper case");
    }
    else if(c>=48 && c<=57){
        printf("digit");
    }
    else{
        printf("any special character");
    }


}