#include<stdio.h>
void main(){
    char ch,ans;
    printf("Enter any character=");
    scanf("%c",&ch);

    ans=(('a'<=ch<='z') || ('A'<=ch<='Z'))? printf("ch is character") : printf("ch is no character");
}