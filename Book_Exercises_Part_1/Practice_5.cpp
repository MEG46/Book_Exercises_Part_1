#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int a,b;
    printf("Welcome to the program which one is bigger number!\n");
    printf("Please enter a number : ");
    scanf("%d",&a);
    printf("Please enter a number : ");
    scanf("%d",&b);
    if(a>b){
            printf("%d > %d : a > b\n",a,b);
    }else if(a<b){
            printf("%d > %d : a > b\n",b,a);
    }else{
          printf("%d = %d : a = b\n",a,b);
    }
    }
    return 0;
    getch();
} 
