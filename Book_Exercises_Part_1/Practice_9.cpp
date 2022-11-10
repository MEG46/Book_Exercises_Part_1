#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             char ch;
             int i = 0;
             while(ch!= 'x'){
                        printf("\b\b\b");
                        ch = getch();
                        i++;
                        printf("%d",i);
                        }
             }
             printf("\nThe program which started by x is ended!\n");
             return 0;
             getch();
} 
