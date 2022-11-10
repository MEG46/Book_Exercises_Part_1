#include <stdio.h>
#include <conio.h>
int doDiv(int a, int b)
{
       int c;
       c= a/b;
       return c;
}
int doRem(int a, int b)
{
       int c;
       c= a%b;
       return c;
}
int main(){
    while(1){
    int num1,num2;
    int result;
    int rem;
    printf("Please enter a number : ");
    scanf("%d",&num1);
    printf("Please enter a number : ");
    scanf("%d",&num2);
    if(num1>num2&&num2!=0&&num1>0&&num2>0){
                  result = doDiv(num1,num2);
                  rem = doRem(num1,num2);
                  printf("Result : %d / %d = %d \nRemain : %d\n",num1,num2,result,rem);
    }else if(num2>num1&&num1!=0&&num1>0&&num2>0){
                  result = doDiv(num2,num1);
                  rem = doRem(num2,num1);
                  printf("Result : %d / %d = %d \nRemain : %d\n",num2,num1,result,rem);
    }else if((0-num1)>num2&&num2!=0 &&num1<0){
                  result = doDiv(num1,num2);
                  rem = doRem(num1,num2);
                  printf("Result : %d / %d = %d \nRemain : %d\n",num1,num2,result,rem);
    }else if((0-num2)>num1&&num1!=0&&num2<0){
                  result = doDiv(num2,num1);
                  rem = doRem(num2,num1);
                  printf("Result : %d / %d = %d \nRemain : %d\n",num2,num1,result,rem);
    }else{
          printf("Enter a valid value!\n");
    }
    }
    return 0;
    getch();
}
