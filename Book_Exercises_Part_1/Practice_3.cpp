#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int a = 5;
    int b;
    b = ++a + a++ * --a;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    } 
    return 0;
    getch();
}
    
