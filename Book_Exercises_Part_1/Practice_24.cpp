#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             int i,j,k;
             printf("Enter a number : ");
             scanf("%d",&j);
             for(i=1;i<=j;i+=2){
                              for(k=i;k<=j;k++){
                                               printf("*");
                                               }
                              printf("\n");
                              }
                              }
                              return 0;
                              getch();
}
