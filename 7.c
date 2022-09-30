#include<stdio.h>
int main(){
    int n;
    float t;
    printf("enter the electric unit charges :: ");
    scanf("%d",&n);

    switch(n<=50){
        
        case 1: t=n*.5;
        break;
        case 0: switch(n<=150){

            case 1: t=25+(n-50)*.75;
            break;
            case 0: switch(n<=250){

                case 1: t=100+(n-150)*1.2;
                break;
                case 0: t=220+(n-250)*1.5;
            }
        }
    
    }
    t+=t*.20;
    printf("total electricity bill is %f\n",t);
    return 0;
}