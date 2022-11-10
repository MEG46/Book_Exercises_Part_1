#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             int c,j,k;
             int array[10]={4,45,43,434,23,465,233,12,13,54};
             int num;
             printf("Enter a number : ");
             scanf("%d",&num);
             for(c=0;c<10;c++){
                               for(j=0;j<(10-c);j++){
                                   if(array[j]>array[j+1]){
                                                         int b = array[j];
                                                         array[j]=array[j+1];
                                                         array[j+1]=b;
                                   }
                                   }
             }
             fflush(stdin);
             printf("Number : %d\n",array[num-1]);
             }
             return 0;
             getch();
}
                                                         
                                                           
                              
                                                 
