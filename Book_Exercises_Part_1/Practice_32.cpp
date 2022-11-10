#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    do{
    int i,j;
    int array[3][3];
    
    for(i=0;i<3;i++){
                      for(j=0;j<3;j++){
                                                         printf("Enter a number : ");
                                                         scanf("%d",&array[i][j]);
                                                         }
                                      }
     printf(" Sum of First Line Numbers : %d\n",(array[0][0]+array[0][1]+array[0][2]));
     printf(" Sum of Second Line Numbers : %d\n",(array[1][0]+array[1][1]+array[1][2]));
     printf(" Sum of Third Line Numbers : %d\n",(array[2][0]+array[2][1]+array[2][2]));
     printf(" Sum of First Column Numbers : %d\n",(array[0][0]+array[1][0]+array[2][0]));
     printf(" Sum of Second Column Numbers : %d\n",(array[1][0]+array[1][1]+array[1][2]));
     printf(" Sum of Third Column Numbers : %d\n",(array[2][0]+array[2][0]+array[2][2]));
     printf("Do you want to continue ? ( Y \ N) : ");
     scanf("%c",&c);
     fflush(stdin);
     printf("\n");
     }while(c!='N');
     return 0;
     getch();
}
