#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             int c;
             int i=0;
             double result;
             printf("Enter the length of array : ");
             scanf("%d",&c);
             float array[c];
             while(i<c){
                              printf("Please enter a number : ");
                              scanf("%f",&array[i]);
                              array[c]=array[i];
                              result+=array[i];
                              i++;
                              }
                              for(i=0;i<c;i++){
                              printf("%d. number : %.2f\n",i,array[i]);
                              }
                              
                              printf("Sum of number : %.2lf\n",result);
                              }
                              return 0;
                              getch();
}
