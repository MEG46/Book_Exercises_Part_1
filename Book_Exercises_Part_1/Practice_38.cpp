#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    do{
             int i,j,k,l,m;

             for(i=0;i<5;i++){
                              if(i==0){
                              printf("1 ");
                              }else if(i==1){
                                    printf("2 ");
                              }else if(i==2){
                                    printf("3 ");
                              }else if(i==3){
                                    printf("4 ");
                              }else{
                                    printf("5 ");
                              }
             }
             printf("\n");
             for(j=0;j<5;j++){
                              if(j==0){
                              printf("2 ");
                              }else if(j==1){
                                    printf("3 ");
                              }else if(j==2){
                                    printf("4 ");
                              }else if(j==3){
                                    printf("5 ");
                              }else{
                                    printf("1 ");
                              }
             }
             printf("\n");
             for(k=0;k<5;k++){
                              if(k==0){
                              printf("3 ");
                              }else if(k==1){
                                    printf("4 ");
                              }else if(k==2){
                                    printf("5 ");
                              }else if(k==3){
                                    printf("1 ");
                              }else{
                                    printf("2 ");
                              }
             }
             printf("\n");
             for(l=0;l<5;l++){
                              if(l==0){
                              printf("4 ");
                              }else if(l==1){
                                    printf("5 ");
                              }else if(l==2){
                                    printf("1 ");
                              }else if(l==3){
                                    printf("2 ");
                              }else{
                                    printf("4 ");
                              }
             }
             printf("\n");
             for(m=0;m<5;m++){
                              if(m==0){
                              printf("5 ");
                              }else if(m==1){
                                    printf("1 ");
                              }else if(m==2){
                                    printf("2 ");
                              }else if(m==3){
                                    printf("3 ");
                              }else{
                                    printf("4 ");
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

             
