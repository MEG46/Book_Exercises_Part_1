#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int a,b,c;
    int z,z1,z3;
    int z4,z5,z6;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("Enter a number : ");
    scanf("%d",&c);
    z = (a > b) ? a : b;
    z1 = (z > c) ? z : c;   
    printf("Biggest number : %d\n",z1);
    }
    return 0;
    getch();
}
    
