#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    do{
             int i,j,k,l,m;
             for(i=0;i<5;i++){
                              printf("1 ");
             }
             printf("\n");
             for(j=0;j<5;j++){
                              if(j%2==0){
                              printf("1 ");
                              }else{
                                    printf("0 ");
                              }
             }
             printf("\n");
             for(k=0;k<5;k++){
                              printf("1 ");
             }
             printf("\n");
             for(l=0;l<5;l++){
                              if(l%2==0){
                              printf("1 ");
                              }else{
                                    printf("0 ");
                              }
             }
             printf("\n");
             for(m=0;m<5;m++){
                              printf("1 ");
             }
             printf("\n");
             printf("Do you want to continue (Y / N) : ");
             scanf("%c",&c);
             fflush(stdin);
             }while(c!='N');
             return 0;
             getch();
}

