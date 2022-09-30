#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,b;
     
    while(1){
        printf("\n\n################################");
        printf("\n\nenter character\n a. addition \n b. subtraction\n c. multiplication \n d. division \n e. exit\n");
        fflush(stdin);
        scanf("%c",&n);
     
        switch(n){
        case 'a':
        printf("enter two number : ");
        scanf("%d%d",&a,&b);
        printf("%d ",a+b);
        break;
        case 'b':
        printf("enter two number : ");
        scanf("%d%d",&a,&b);
        printf("%d ",a-b);
        break;
        case 'c':
        printf("enter two number : ");
        scanf("%d%d",&a,&b);
        printf("%d ",a*b);
        break;
        case 'd':
        printf("enter two number : ");
        scanf("%d%d",&a,&b);
        printf("%d ",a/b);
        break;
        case 'e':
        exit(0);
        default:
        printf("invalid number");
    }
    }
    return 0;

}