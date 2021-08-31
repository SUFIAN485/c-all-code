#include<stdio.h>
int main()
{
    int num;
    printf("enter your number= ");
    scanf("%d",&num);
    if((num>=10 && num<=100) || (num>=1000 && num<=10000)){
        printf("this is a lucky number");
    }

    else{
            printf("this is unlucky number");
    }

    return 0;
}
