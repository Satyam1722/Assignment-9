#include<stdio.h>
int main(){
    int n;
    printf("enter the number :: ");
    scanf("%d",&n);

    switch(n%2){
        
        case 1: 
        break;

        case 0:n++;
        break;
        }

        printf("%d \n",n);
    
    return 0;
    }
