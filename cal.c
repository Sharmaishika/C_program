               //calculator

#include <stdio.h>
void addition(int n1,int n2);        //function declaration
void substraction(int n1,int n2);
void multiplication(int n1,int n2);
void division(int n1,int n2);

int main(){
    int num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter seconed number:");
    scanf("%d",&num2);
    
    addition(num1,num2);
    substraction(num1,num2);
    multiplication(num1,num2);
    division(num1,num2);
    
    return 0;
}

   void addition(int n1,int n2){
       printf("\n addition is %d",n1+n2);
   }
   void substraction(int n1,int n2){
       printf("\n substraction is %d",n1-n2);
   }
   void multiplication(int n1,int n2){
       printf("\n multiplication is %d",n1*n2);
   }
   void division(int n1,int n2){
       float x=n1;
       float y=n2;
       printf("\n division is %.3f",x/y);
   }
   