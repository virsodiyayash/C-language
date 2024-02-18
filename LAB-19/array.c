#include<stdio.h>
void array(int a[5]);
void main(){
    int n,a[5];

    array(a);
}

void array(int a[5]){
    int n,i;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
    
}
