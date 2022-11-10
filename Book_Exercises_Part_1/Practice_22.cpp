#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             int i,j,k;
             printf("Enter a number : ");
             scanf("%d",&j);
            for(i=0;i<j;i++){
                              for(k=0;k<=i;k++){
                                               printf("*");
                                               }
                              printf("\n");
                              }
             for(i=1;i<=j;i++){ 
                for(k=i;k<j;k++){     
                                  printf("*");
                }
                printf("\n");
                }
                }
                return 0;
                getch();
}
