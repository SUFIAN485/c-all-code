#include<stdio.h>
int main()
{
    int mark;
    printf("enter your mark= ");
    scanf("%d",&mark);
    if(mark > 100 || 0<mark){
            printf("invalid input");
    }
    else{
        if(mark>=80){
            printf("A+");
        }
        else{
            if(mark>=70){
                printf("A");
            }
            else{
                if(mark>=60){
                    printf("A-");
                }
                else{
                    if(mark>=50){
                        printf("B");
                    }
                    else{
                        printf("F");
                    }
                }
            }
        }
    }
    return 0;
}
