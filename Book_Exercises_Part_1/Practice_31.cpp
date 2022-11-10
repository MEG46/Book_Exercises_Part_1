#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    do{
    int i,j;
    int array[3][3]={{3,5,6},{4,2,3},{4,8,7}};
    
    for(i=0;i<3;i++){
                      for(j=0;j<3;j++){
                                                         printf("%d ",array[i][j]);
                                                         }
                                                         printf("\n");
                                      }
     printf("Do you want to continue ? ( Y \ N) : ");
     scanf("%c",&c);
     }while(c!='N');
     return 0;
     getch();
}
