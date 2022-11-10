#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             int c;
             int i;
             int array[10];
             for(i=0;i<10;i++){
                               printf("Please enter a number : ");
                               scanf("%d",&array[i]);
                               }
             printf("Please enter a number between 1 and 100 : ");
             scanf("%d",&c);
             for(i=0;i<10;i++){
                               if(array[i]%c==0){
                                                 printf("%d ",array[i]);
                               }else{
                                     continue;
                                     }
                               }
             printf("\n");
             }
             return 0;
             getch();
}
                                     
