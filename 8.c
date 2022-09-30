#include<stdio.h>
int main(){
    int n;
    printf("enter the number :: ");
    scanf("%d",&n);

    switch(n>=0){
        
        case 1: n=-n;
        break;

        case 0:n=-n;
        break;
        }

        printf("%d \n",n);
    
    return 0;
    }
