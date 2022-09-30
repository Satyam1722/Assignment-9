#include<stdio.h>
int main(){
    int n;
    printf("enter the number :: ");
    scanf("%d",&n);

    switch(n==1){
        
        case 1: printf("good\n");
        break;

        case 0: switch(n==2){

            case 1: printf("better\n");
            break;

            case 0: switch(n==3){

                case 1: printf("best\n");
                break;
                
                case 0: printf("invalid\n");
            }
        }
    
    }
    return 0;
}