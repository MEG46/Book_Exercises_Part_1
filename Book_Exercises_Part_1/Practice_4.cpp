#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int a = 5, b = 13, c = 8,x;
    a += 2;
    b -=a++;
    c*= --b;
    
    x = ++a * b-- % ++c;
    
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("x=%d\n",x);
}
return 0;
getch();
}
