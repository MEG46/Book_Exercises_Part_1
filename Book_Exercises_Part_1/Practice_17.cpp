#include <stdio.h>
#include <conio.h>
int main(){
    int i=3;
    int j;
    do{
    printf("Enter a number : ");
    scanf("%d",&j);
    while(i<j){ 
                      printf("%d\n",i);
                      i+=3;
                      }
    }while(j!=10);
    return 0;
    getch();
}
                      
