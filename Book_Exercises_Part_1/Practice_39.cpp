#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    do{
       int array[4][4];
       int i,j,k;
       int num;
       for(i=0;i<4;i++){
                        for(j=0;j<4;j++){
                                         printf("Please enter a number : ");
                                         scanf("%d",&array[i][j]);
                                         }
                        }
       printf("Please enter a number : ");
       scanf("%d",&num);
       fflush(stdin);
       for(i=0;i<4;i++){
                        for(j=0;j<4;j++){
                                         if(num==array[i][j]){
                                                              printf("The %d. indis of array : ",i);
                                                              for(k=0;k<4;k++){
                                                                               printf("%d ",array[i][k]);
                                                                               }
                                         }else{
                                               continue;
                                         }
                        }
       }
       printf("\n");
       printf("Do you want to continue (Y / N) : ");
       scanf("%c",&c);
       fflush(stdin);
       }while(c!='N');
       return 0;
       getch();
}
