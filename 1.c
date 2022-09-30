#include<stdio.h>
#include<stdlib.h>
int main(){
    int d,n;
    printf("enter the month number :: ");
    scanf("%d",&n);

    switch(n){
        case 1:
        d=31;
        break;
        case 2:
        d=28;
        break;
        case 3:
        d=31;
        break;
        case 4:
        d=30;
        break;
        case 5:
        d=31;
        break;
        case 6:
        d=30;
        break;
        case 7:
        d=31;
        break;
        case 8:
        d=31;
        break;
        case 9:
        d=30;
        break;
        case 10:
        d=31;
        break;
        case 11:
        d=30;
        break;
        case 12:
        d=31;
        break;
        default:
        printf("invalid number \n");
        exit(0);
    }
    printf("days is : %d",d);
    return 0;
}