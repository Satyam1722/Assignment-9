#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,b,c;
 
    while(1){
        printf("\n\n################################\n\n");
        printf("\nenter character\n a. for issoscles triangle \n b. for right angled triangle\n c. for equilateral triangle \n e. exit\n");
        fflush(stdin);
        scanf("%c",&n);
     
        switch(n){
        case 'a':
        printf("enter three sides : ");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b || b==c || a==c)
        printf("issoscles triangle\n");
        else
        printf("Not a issoscles triangle\n");
        break;

        case 'b':
        printf("enter three sides : ");
        scanf("%d%d%d",&a,&b,&c);
        if(a*a==b*b + c*c || b*b==a*a + c*c || c*c==b*b + a*a)
        printf("Right angled triangle\n");
        else
        printf("Not a Right angled triangle\n");
        break;
        
        case 'c':
        printf("enter three sides : ");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b && b==c )
        printf("equiliteral triangle\n");
        else
        printf("Not a equiliteral triangle\n");
        break;

        case 'd':
        exit(0);

        default:
        printf("invalid choice");
    }
    }
    return 0;

}