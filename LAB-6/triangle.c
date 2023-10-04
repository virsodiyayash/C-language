#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,max1,max2,max3;
    printf("Enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    

    if(a==b && b==c){
        printf("triangle is equilateral ");
    }
    else if(a==b || a==c || b==c){
        printf("triangle is isosceles");
    }
    else if(a!=b &&  a!=c && b!=c){
        printf("triangle is scalene");
    }
    if(a>b && a>c){
        max1=a;
        max2=b;
        max3=c;
       if(pow(max1,2)==pow(max2,2)+pow(max3,2)){
        printf("triangle is right angle triangle");
    }
    }
    if(b>c && b>a){
        max1=b;
        max2=a;
        max3=c;
        if(pow(max1,2)==pow(max2,2)+pow(max3,2)){
            printf("triangle is right angle");
        }
    }
    if(c>a && c>b){
        max1=c;
        max2=a;
        max3=b;
        if(pow(max1,2)==pow(max2,2)+pow(max3,2)){
            printf("triangle is right angle");
        }

    }
    
        
    

}