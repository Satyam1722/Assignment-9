#include<stdio.h>
int main(){
    int d,n;
    printf("enter the day number :: ");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("hello its monday\n");
        break;
        case 2:
        printf("hello its tuesday\n");
        break;
        case 3:
        printf("hello its wednesday\n");
        break;
        case 4:
        printf("hello its thursday\n");
        break;
        case 5:
        printf("hello its friday\n");
        break;
        case 6:
        printf("hello its saturday\n");
        break;
        case 7:
        printf("hello its sunday\n");
        break;
        default:
        printf("invalid number \n");
    
    }
    return 0;
}