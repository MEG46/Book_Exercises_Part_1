#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             int a,b;
             int result=0;
             char ch;
             printf("Enter a process (+,-,*,/,%) : ");
             scanf("%c",&ch);
             printf("Enter a number : ");
             scanf("%d",&a);
             printf("Enter a number : ");
             scanf("%d",&b);
             if(ch=='+'){
                         result=a+b;
                         printf("%d + %d = %d\n",a,b,result);
             }else if(ch=='-'){
                         result=a+b;
                         printf("%d - %d = %d\n",a,b,result);
             }else if(ch=='*'){
                         result=a+b;
                         printf("%d * %d = %d\n",a,b,result);
             }else if(ch=='/'){
                         result=a+b;
                         printf("%d / %d = %d\n",a,b,result);
             }else if(ch=='%'){
                         result=a+b;
                         printf("%d % %d = %d\n",a,b,result);
             }else{
                   printf("Please enter a valid process!\n");
             }
             }
             return 0;
             getch();
}
                         
