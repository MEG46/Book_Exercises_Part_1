#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             
             int j,k;
             int i=1;
             printf("Enter a number : ");
             scanf("%d",&j);
             while(j>=i){ 
                int k=1;         
                while(k<=i){
                           printf("*");
                           k++;     
                           
                                 
                }
                          
                           i++; 
                           printf("\n");
                }
             while(j>=1){ 
                int i=j;         
                while(i>1){
                           printf("*");
                           i--;     
                           
                                 
                }
                          
                           j--; 
                           printf("\n");
                }
                }
                return 0;
                getch();
}
