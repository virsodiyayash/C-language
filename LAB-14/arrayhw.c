#include<stdio.h>
void main(){
    int h[5],w[5],hc=0,wc=0,i,n=0;

    for(i=0;i<5;i++){
        printf("Enter height and weight of person");
        scanf("%d %d",&h[i],&w[i]);
    
    if(h[i]>170){
        hc++;
    }
    if(w[i]>50){
        wc++;
    }
    }
    for(i=0;i<5;i++){
        if(h[i]>170 && w[i]>50){
            n++;
        }
    }
        printf("person whose height is greater than 170 = %d\n",hc);
        printf("person whose weight is greater than 50 = %d\n",wc);
        printf("person whose height and weight both are greater = %d",n);
   
    } 

    
    
    
        
        
    

    

        
