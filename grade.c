    //find a grade by user input

#include<stdio.h>
int main(){
    int percentage;                        //taking percentage as integer
    
    printf("enter a number to check:");   //printing to enter the number
    scanf("%d",&percentage);
    
    if(percentage>=0 && percentage<=33){     //use of if else
        printf("\n fail");
        }
        else if(percentage>=34 && percentage<=50){
            printf("\n D grade");
        }
        else if(percentage>=51 && percentage<=60){
        printf("\n C grade");
        }
        else if(percentage>=61 && percentage<=80){
            printf("\n B grade");
                }
        else if(percentage>=81 && percentage<=100){
            printf("\n A grade");
        }
        return 0;
    
}


