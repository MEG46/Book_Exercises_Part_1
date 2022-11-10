#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int x = 5, y = 6;
    int w = 5, z = 4;
    printf(x < y ? "x < y\n" : "x >= y\n");
    printf(x > z ? "x > z\n" : "x <= z\n");
    printf(w != x ? "w < x\n" : "w == x\n");
    }
    return 0;
    getch();
}
