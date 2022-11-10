#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int i=2;        
    char ch[10];
    char ch1[10];
    int ch2[i];
    printf("Please enter your name : ");
    scanf("%s",ch);
    printf("Please enter your surname : ");
    scanf("%s",ch1);
    printf("Please enter your age : ");
    scanf("%d",&ch2[i]);
    printf("\n--------------------------------\n\n");
    printf("Hello %s %s!\n",ch,ch1);
    printf("\n--------------------------------\n\n");
    printf("Name : %s\n",ch);
    printf("Surname : %s\n",ch1);
    printf("Age : %d\n",ch2[i]);
    printf("\n--------------------------------\n\n");
    }
    return 0;
    getch();
}
    
