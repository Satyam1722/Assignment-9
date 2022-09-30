#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    float x1,x2;
    printf("enter the coefficients\n ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch(d>0){ 
        
        case 1: x1=(-b/2*a)+sqrt(d)/2*a;
        x2=(-b/2*a)+sqrt(d)/2*a;
        printf("Roots are : \n%f\n%f",x1,x2);
        break;

        case 0: switch(d<0){
            case 1:
            x1=(-b/2*a);
            x2=(-b/2*a);
            printf("Roots are : \n%f+%fi\n%f-%fi",x1,sqrt(-d)/2*a,x2,sqrt(-d)/2*a);
            break;

            case 0:
            x1=(-b/2*a);
            x2=(-b/2*a);
            printf("Roots are : \n%f\n%f",x1,x2);

        }

        }
    
    return 0;
    }
