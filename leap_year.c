
#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if (x<=0){
        printf("Wrong Input");}
    else if (x%4==0){
        if (x%100==0){
            if(x%400==0){
                printf("Leap");}
                else
                printf("Normal");}
        else{
            printf("Leap");}}
    
        else{
            printf("Normal");
            
        }
    
    
}
