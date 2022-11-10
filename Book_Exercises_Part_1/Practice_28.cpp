#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int array[]={25, 22, 17, 19, 47, 3, 98, 5, 124, 10};
    int d;
    int i;
    printf("Enter a number : ");
    scanf("%d",&d);
    for(i=0;i<10;i++){
                      if(array[i]>d){
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
