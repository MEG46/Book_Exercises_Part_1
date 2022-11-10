#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    unsigned char a = 224;
    
    printf("%d\n",a >> 2);
    
    a = a << 1;
    printf("%d\n",a);
    
     a = a >> 3;
    printf("%d\n",a);
    }
    return 0;
    getch();
}
