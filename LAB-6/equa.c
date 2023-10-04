#include<stdio.h>
#include<math.h>

void main(){
    int a,b,c;
    float D1,D2,d,t;
    printf("Enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);

    d=(((b*b)-(4*a*c)));
    t=(d);
    printf("%d",t);

    if(t>=0){
        t=sqrt(d);
        D1=(((-b)+t)/2*a);
        printf("\n%f",D1);
        D2=(((-b)-t)/2*a);
        printf("\n%f",D2);
        
    }
    else{
        printf("equation not valid");
    }
    

    
    

    



    
    

    
}