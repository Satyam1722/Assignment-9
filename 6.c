#include<stdio.h>
int main(){
    int n;
    printf("enter the year :: ");
    scanf("%d",&n);

    switch(n%100==0){
        
        case 1: switch(n%400==0){
            case 1:
            printf("Leap Year\n"); 
            break;
            case 0:
            printf("Not A Leap Year\n"); 
        }
        break;

        case 0: switch(n%4==0){
            case 1: printf("Leap Year\n");
            break;
            case 0: printf("Not A Leap Year\n");
            }

        }
    
    return 0;
    }
