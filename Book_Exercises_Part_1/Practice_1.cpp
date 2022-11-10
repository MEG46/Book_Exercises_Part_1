#include <stdio.h>
#include <conio.h>
int doMod(int a){
    int c;
    c=a%2;
    return c;
}
int main(){
    while(1){
    int num1;
    int result;
    printf("Welcome to odd-even game!\n");
    printf("Please enter a number : ");
    scanf("%d",&num1);
    result = doMod(num1);
    if(result==0){
                  printf("%d is an even number.\n",num1);
    }else{
          printf("%d is an odd number.\n",num1);
    }
    }
    return 0;
    getch();
}
    
    
