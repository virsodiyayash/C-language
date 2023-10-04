#include<stdio.h>

void main(){
    float unit,bill,tb;
    printf("Enter the unit");
    scanf("%f",&unit);

    if(unit<=50){
        bill=(unit*0.5);
    }
    else if(unit>50 && unit<150){
        bill=(50*0.5+(unit-50)*0.75);
    }
    else if(unit>150 && unit<250){
        bill=(50*0.5+100*0.75+(unit-150)*1.20);
    }
    else if(unit>250){
        bill=(50*0.5+100*0.75+100*1.20+(unit-250)*1.5);
    }
    printf("%f",bill);

    tb=bill + bill*0.2;
    printf("\n%f",tb);

        
    
}
